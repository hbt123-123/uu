// rea decompile_all
// name: FUN_100512424
// address: 0x100512424
// body: available
// range: 0x100512424-0x10051262f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100512424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = 0;
  local_88 = param_1;
  local_80 = param_3;
  uStack_78 = param_5;
  local_70 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar12 = *(long *)(lVar2 + -8);
  uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90 = (long)&local_90 - uVar5;
  lVar8 = local_90 - uVar5;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar11 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar8 - uVar5;
  lVar6 = lVar9 - uVar5;
  (**(code **)(lVar12 + 0x38))(lVar6,1,1,lVar2);
  (**(code **)(param_6 + 0x20))(lVar6,local_80,uStack_78,local_70,param_4,param_6);
  lVar4 = local_90;
  if (unaff_x21 == 0) {
    local_70 = param_6;
    (**(code **)(lVar11 + 0x20))(lVar9,lVar6,lVar3);
    lVar6 = lVar9;
    (**(code **)(lVar12 + 0x30))(lVar9,1,lVar2);
    bVar1 = (int)lVar6 != 1;
    if (bVar1) {
      pcVar7 = *(code **)(lVar12 + 0x20);
      (*pcVar7)(lVar8,lVar9,lVar2);
      (*pcVar7)(lVar4,lVar8,lVar2);
      lVar2 = local_70;
      uVar10 = local_88;
      FUN_1005120b4(local_88,param_2,lVar4,param_4,local_70);
    }
    else {
      FUN_10003f094(param_2);
      (**(code **)(lVar11 + 8))(lVar9,lVar3);
      lVar2 = local_70;
      uVar10 = local_88;
    }
    lVar4 = 0;
    FUN_100512144(0,param_4,lVar2);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar10,!bVar1,1,lVar4);
  }
  else {
    FUN_10003f094(param_2);
    (**(code **)(lVar11 + 8))(lVar6,lVar3);
  }
  return;
}

