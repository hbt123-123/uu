// rea decompile_all
// name: FUN_100513070
// address: 0x100513070
// body: available
// range: 0x100513070-0x1005131df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100513070(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar5 + -8);
  puVar6 = auStack_80 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSqMa(0,lVar5);
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)puVar6 - uVar2;
  lVar8 = lVar7 - uVar2;
  (**(code **)(lVar9 + 0x38))(lVar8,1,1,lVar5);
  (**(code **)(param_4 + 0x188))(lVar8,lVar5,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar4 + 0x20))(lVar7,lVar8,lVar1);
    lVar8 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,lVar5);
    if ((int)lVar8 != 1) {
      (**(code **)(lVar9 + 0x20))(puVar6,lVar7,lVar5);
      (**(code **)(lVar9 + 0x28))(unaff_x20,puVar6,lVar5);
      return;
    }
    pcVar3 = *(code **)(lVar4 + 8);
  }
  else {
    pcVar3 = *(code **)(lVar4 + 8);
    lVar7 = lVar8;
  }
  (*pcVar3)(lVar7,lVar1);
  return;
}

