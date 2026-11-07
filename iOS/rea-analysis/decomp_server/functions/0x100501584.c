// rea decompile_all
// name: FUN_100501584
// address: 0x100501584
// body: available
// range: 0x100501584-0x10050172f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100501584(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_70;
  
  lVar2 = 0;
  __sSqMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar9 = (long)&local_70 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_2 + -8);
  uVar8 = lVar9 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = param_1;
  (**(code **)(lVar6 + 0x10))(lVar9,param_1,lVar2);
  pcVar5 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar9;
  (*pcVar5)(lVar9,1,param_2);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x10))(uVar8,param_2,param_3);
    lVar3 = lVar9;
    (*pcVar5)(lVar9,1,param_2);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar6 + 8))(lVar9,lVar2);
    }
  }
  else {
    (**(code **)(lVar7 + 0x20))(uVar8,lVar9,param_2);
  }
  uVar4 = uVar8;
  FUN_100501730(uVar8,*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3);
  uVar1 = local_70;
  if ((unaff_x21 == 0) && ((uVar4 & 1) != 0)) {
    (**(code **)(lVar6 + 8))(local_70,lVar2);
    (**(code **)(lVar7 + 0x20))(uVar1,uVar8,param_2);
    (**(code **)(lVar7 + 0x38))(uVar1,0,1,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  else {
    (**(code **)(lVar7 + 8))(uVar8,param_2);
  }
  return;
}

