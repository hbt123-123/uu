// rea decompile_all
// name: FUN_10050f584
// address: 0x10050f584
// body: available
// range: 0x10050f584-0x10050f82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050f584(undefined8 param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = 0;
  __sSqMa(0,param_4);
  lVar7 = *(long *)(lVar1 + -8);
  puVar6 = auStack_c0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_4;
  _swift_conformsToProtocol(param_4,&TargetProtocolDescriptor_10090176c);
  if (lVar5 != 0 && param_4 != 0) {
    (**(code **)(lVar5 + 8))(&local_b8,param_4,lVar5);
    local_68 = local_a0;
    if ((*(long *)(local_a0 + 0x10) == 0) || (FUN_100511c0c(), (param_3 & 1) == 0)) {
      _swift_release(local_b8);
      local_70 = local_b0;
      FUN_100040bb4(&local_70,&DAT_100aaa400,&DAT_100837ad0);
      local_78 = local_a8;
      FUN_100040bb4(&local_78,&DAT_100aaa3e8,&DAT_100837fb0);
      FUN_100040bb4(&local_68,&DAT_100aaa3e8,&DAT_100837fb0);
      local_80 = local_98;
      FUN_100040bb4(&local_80,&DAT_100aaa3f0,&DAT_100837ae0);
      local_88 = local_90;
      FUN_100040bb4(&local_88,&DAT_100aaa3f8,&DAT_100837fc0);
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(local_a0 + 0x38) + param_2 * 8);
      _swift_release(local_b8);
      local_70 = local_b0;
      FUN_100040bb4(&local_70,&DAT_100aaa400,&DAT_100837ad0);
      local_78 = local_a8;
      FUN_100040bb4(&local_78,&DAT_100aaa3e8,&DAT_100837fb0);
      FUN_100040bb4(&local_68,&DAT_100aaa3e8,&DAT_100837fb0);
      local_80 = local_98;
      FUN_100040bb4(&local_80,&DAT_100aaa3f0,&DAT_100837ae0);
      local_88 = local_90;
      FUN_100040bb4(&local_88,&DAT_100aaa3f8,&DAT_100837fc0);
      (**(code **)(param_5 + 0x20))(puVar6,uVar4,param_4,param_5);
      lVar5 = *(long *)(param_4 + -8);
      puVar2 = puVar6;
      (**(code **)(lVar5 + 0x30))(puVar6,1,param_4);
      if ((int)puVar2 == 0) {
        (**(code **)(lVar5 + 0x20))(param_1,puVar6,param_4);
        pcVar3 = *(code **)(lVar5 + 0x38);
        uVar4 = 0;
        goto LAB_10050f7e0;
      }
      (**(code **)(lVar7 + 8))(puVar6,lVar1);
    }
  }
  pcVar3 = *(code **)(*(long *)(param_4 + -8) + 0x38);
  uVar4 = 1;
LAB_10050f7e0:
  (*pcVar3)(param_1,uVar4,1,param_4);
  return;
}

