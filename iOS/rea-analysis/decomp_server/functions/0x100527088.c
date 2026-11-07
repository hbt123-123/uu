// rea decompile_all
// name: FUN_100527088
// address: 0x100527088
// body: available
// range: 0x100527088-0x10052733b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100527088(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  
  lVar4 = *(long *)(param_2 + -8);
  puVar10 = auStack_b0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = 0;
  __sSqMa();
  lVar6 = *(long *)(uVar1 - 8);
  lVar7 = *(long *)(lVar6 + 0x40);
  uVar5 = lVar7 + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)puVar10 - uVar5;
  lVar9 = lVar11 - uVar5;
  uVar5 = uVar1;
  FUN_100533688();
  if ((uVar5 & 1) == 0) {
    FUN_1005346a8(lVar11,param_2,param_3);
    if (unaff_x21 == 0) {
      lVar7 = lVar11;
      (**(code **)(lVar4 + 0x30))(lVar11,1,param_2);
      if ((int)lVar7 == 1) {
        (**(code **)(lVar6 + 8))(lVar11,uVar1);
      }
      else {
        (**(code **)(lVar6 + 8))(param_1,uVar1);
        pcVar8 = *(code **)(lVar4 + 0x20);
        (*pcVar8)(puVar10,lVar11,param_2);
        (*pcVar8)(param_1,puVar10,param_2);
        (**(code **)(lVar4 + 0x38))(param_1,0,1,param_2);
      }
    }
  }
  else {
    lVar11 = param_2;
    _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_100900904);
    if (lVar11 == 0) {
      (**(code **)(lVar6 + 8))(param_1,uVar1);
      (**(code **)(lVar4 + 0x38))(param_1,1,1,param_2);
    }
    else {
      lVar7 = lVar9 - (lVar7 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar11 + 0x18))(lVar7,param_2,lVar11);
      if (unaff_x21 == 0) {
        pcVar8 = *(code **)(lVar6 + 8);
        (*pcVar8)(param_1,uVar1);
        lVar2 = lVar7;
        (**(code **)(lVar4 + 0x30))(lVar7,1,param_2);
        if ((int)lVar2 == 1) {
          (*pcVar8)(lVar7,uVar1);
          local_70 = 0;
          uStack_88 = 0;
          local_90 = 0;
          local_78 = 0;
          uStack_80 = 0;
        }
        else {
          local_78 = param_2;
          local_70 = lVar11;
          FUN_1000efc08(&local_90);
          (**(code **)(lVar4 + 0x20))();
        }
        puVar3 = &DAT_100aaa140;
        FUN_100004bb4(&DAT_100aaa140,&DAT_100837af0);
        lVar7 = lVar9;
        _swift_dynamicCast(lVar9,&local_90,puVar3,param_2,6);
        (**(code **)(lVar4 + 0x38))(lVar9,(uint)lVar7 ^ 1,1,param_2);
        (**(code **)(lVar6 + 0x20))(param_1,lVar9,uVar1);
      }
    }
  }
  return;
}

