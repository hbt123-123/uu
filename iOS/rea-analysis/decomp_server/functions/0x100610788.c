// rea decompile_all
// name: FUN_100610788
// address: 0x100610788
// body: available
// range: 0x100610788-0x1006108b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100610788(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long alStack_80 [4];
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  lVar7 = *(long *)(lVar3 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_100608530(0,lVar3);
  lVar8 = *(long *)(lVar1 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)unaff_x20[2];
  (**(code **)(*plVar4 + 0x58))(lVar6);
  lVar2 = lVar6;
  _swift_getEnumCaseMultiPayload(lVar6,lVar1);
  if ((int)lVar2 == 1) {
    (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar3);
    (*param_1)(puVar5);
    (**(code **)(lVar7 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
    *(long *)(lVar6 + -0x20) = lVar3;
    *(code **)(lVar6 + -0x18) = param_1;
    *(undefined8 *)(lVar6 + -0x10) = param_2;
    (**(code **)(*plVar4 + 0x60))(FUN_100615140);
  }
  return;
}

