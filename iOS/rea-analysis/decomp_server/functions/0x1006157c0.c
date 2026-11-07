// rea decompile_all
// name: FUN_1006157c0
// address: 0x1006157c0
// body: available
// range: 0x1006157c0-0x1006158ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006157c0(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 auStack_80 [4];
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  FUN_100616300(0,uVar5);
  lVar8 = *(long *)(lVar1 + -8);
  puVar6 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100608530(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = (long)puVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)unaff_x20[2];
  (**(code **)(*plVar4 + 0x58))(lVar7);
  lVar3 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar2);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar8 + 0x20))(puVar6,lVar7,lVar1);
    (*param_1)(puVar6);
    (**(code **)(lVar8 + 8))(puVar6,lVar1);
  }
  else {
    (**(code **)(lVar9 + 8))(lVar7,lVar2);
    *(undefined8 *)(lVar7 + -0x20) = uVar5;
    *(code **)(lVar7 + -0x18) = param_1;
    *(undefined8 *)(lVar7 + -0x10) = param_2;
    (**(code **)(*plVar4 + 0x60))(FUN_100616114);
  }
  return;
}

