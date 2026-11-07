// rea decompile_all
// name: FUN_100514670
// address: 0x100514670
// body: available
// range: 0x100514670-0x1005147f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100514670(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_80;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  lVar7 = (long)&local_80 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_80 = lVar7;
  __sSqMa(0,lVar6);
  lVar9 = *(long *)(lVar2 + -8);
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar3;
  lVar5 = lVar7 - uVar3;
  (**(code **)(lVar8 + 0x10))(lVar5);
  (**(code **)(lVar8 + 0x38))(lVar5,0,1,lVar6);
  (**(code **)(param_4 + 0x1a8))(lVar5,lVar6,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  lVar1 = local_80;
  if (unaff_x21 == 0) {
    (**(code **)(lVar9 + 0x20))(lVar7,lVar5,lVar2);
    lVar5 = lVar7;
    (**(code **)(lVar8 + 0x30))(lVar7,1,lVar6);
    if ((int)lVar5 != 1) {
      (**(code **)(lVar8 + 0x20))(lVar1,lVar7,lVar6);
      (**(code **)(lVar8 + 0x28))(unaff_x20,lVar1,lVar6);
      return;
    }
    pcVar4 = *(code **)(lVar9 + 8);
  }
  else {
    pcVar4 = *(code **)(lVar9 + 8);
    lVar7 = lVar5;
  }
  (*pcVar4)(lVar7,lVar2);
  return;
}

