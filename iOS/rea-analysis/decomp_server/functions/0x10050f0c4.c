// rea decompile_all
// name: FUN_10050f0c4
// address: 0x10050f0c4
// body: available
// range: 0x10050f0c4-0x10050f327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050f0c4(undefined8 *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = param_2;
  _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_10090176c);
  uVar7 = 0;
  uVar8 = 0;
  if (lVar4 == 0 || param_2 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 0xff00;
  }
  else {
    (**(code **)(lVar4 + 8))(&local_a8,param_2,lVar4);
    (**(code **)(param_3 + 0x28))();
    local_58 = local_a0;
    if ((*(long *)(local_a0 + 0x10) == 0) || (FUN_1003618e4(), (param_3 & 1) == 0)) {
      _swift_release(local_a8);
      local_60 = local_98;
      FUN_100040bb4(&local_60,&DAT_100aaa3e8,&DAT_100837fb0);
      local_68 = local_90;
      FUN_100040bb4(&local_68,&DAT_100aaa3e8,&DAT_100837fb0);
      local_70 = local_88;
      FUN_100040bb4(&local_70,&DAT_100aaa3f0,&DAT_100837ae0);
      local_78 = local_80;
      FUN_100040bb4(&local_78,&DAT_100aaa3f8,&DAT_100837fc0);
      FUN_100040bb4(&local_58,&DAT_100aaa400,&DAT_100837ad0);
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 0xff00;
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      lVar4 = *(long *)(local_a0 + 0x38) + param_2 * 0x50;
      uVar8 = *(undefined8 *)(lVar4 + 0x30);
      uVar7 = *(undefined8 *)(lVar4 + 0x28);
      uVar5 = *(undefined8 *)(lVar4 + 0x38);
      uVar6 = *(undefined8 *)(lVar4 + 0x40);
      bVar1 = *(byte *)(lVar4 + 0x48);
      cVar2 = *(char *)(lVar4 + 0x49);
      FUN_10050f830(uVar5,uVar6,bVar1,cVar2);
      _swift_release(local_a8);
      local_60 = local_98;
      FUN_100040bb4(&local_60,&DAT_100aaa3e8,&DAT_100837fb0);
      local_68 = local_90;
      FUN_100040bb4(&local_68,&DAT_100aaa3e8,&DAT_100837fb0);
      local_70 = local_88;
      FUN_100040bb4(&local_70,&DAT_100aaa3f0,&DAT_100837ae0);
      local_78 = local_80;
      FUN_100040bb4(&local_78,&DAT_100aaa3f8,&DAT_100837fc0);
      FUN_100040bb4(&local_58,&DAT_100aaa400,&DAT_100837ad0);
      uVar3 = 0x100;
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      uVar3 = uVar3 | bVar1;
    }
  }
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(ushort *)(param_1 + 4) = uVar3;
  return;
}

