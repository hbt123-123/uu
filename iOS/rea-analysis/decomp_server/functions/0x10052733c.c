// rea decompile_all
// name: FUN_10052733c
// address: 0x10052733c
// body: available
// range: 0x10052733c-0x10052757b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052733c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  
  uVar1 = 0;
  __sSqMa();
  lVar7 = *(long *)(uVar1 - 8);
  lVar8 = *(long *)(lVar7 + 0x40);
  lVar6 = (long)&local_90 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = uVar1;
  FUN_100533688();
  if ((uVar2 & 1) == 0) {
    FUN_1005346a8(lVar6,param_2,param_3);
    if (unaff_x21 == 0) {
      lVar4 = *(long *)(param_2 + -8);
      lVar8 = lVar6;
      (**(code **)(lVar4 + 0x30))(lVar6,1,param_2);
      if ((int)lVar8 == 1) {
        (**(code **)(lVar7 + 8))(lVar6,uVar1);
      }
      else {
        (**(code **)(lVar4 + 8))(param_1,param_2);
        (**(code **)(lVar4 + 0x20))(param_1,lVar6,param_2);
      }
    }
  }
  else {
    lVar4 = param_2;
    _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_100900904);
    if (lVar4 == 0 || param_2 == 0) {
      (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
      (**(code **)(param_3 + 0x18))(param_1,param_2,param_3);
    }
    else {
      lVar6 = lVar6 - (lVar8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar4 + 0x18))(lVar6,param_2,lVar4);
      if (unaff_x21 == 0) {
        lVar5 = *(long *)(param_2 + -8);
        (**(code **)(lVar5 + 8))(param_1,param_2);
        lVar8 = lVar6;
        (**(code **)(lVar5 + 0x30))(lVar6,1,param_2);
        if ((int)lVar8 == 1) {
          (**(code **)(lVar7 + 8))(lVar6,uVar1);
          local_70 = 0;
          uStack_88 = 0;
          local_90 = 0;
          local_78 = 0;
          uStack_80 = 0;
        }
        else {
          local_78 = param_2;
          local_70 = lVar4;
          FUN_1000efc08(&local_90);
          (**(code **)(lVar5 + 0x20))();
        }
        puVar3 = &DAT_100aaa140;
        FUN_100004bb4(&DAT_100aaa140,&DAT_100837af0);
        _swift_dynamicCast(param_1,&local_90,puVar3,param_2,7);
      }
    }
  }
  return;
}

