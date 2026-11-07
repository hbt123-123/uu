// rea decompile_all
// name: FUN_1005468cc
// address: 0x1005468cc
// body: available
// range: 0x1005468cc-0x100546b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005468cc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined2 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  uVar10 = param_2;
  _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_10090176c);
  if (uVar10 != 0 && param_2 != 0) {
    (**(code **)(uVar10 + 8))(&local_b8,param_2);
    local_68 = local_b0;
    if ((*(long *)(local_b0 + 0x10) == 0) || (FUN_1003618e4(), (uVar10 & 1) == 0)) {
      _swift_release(local_b8);
      FUN_100040bb4(&local_68,&DAT_100aaa400,&DAT_100837ad0);
      local_70 = local_a8;
      FUN_100040bb4(&local_70,&DAT_100aaa3e8,&DAT_100837fb0);
      local_78 = local_a0;
      FUN_100040bb4(&local_78,&DAT_100aaa3e8,&DAT_100837fb0);
      local_80 = local_98;
      FUN_100040bb4(&local_80,&DAT_100aaa3f0,&DAT_100837ae0);
      local_88 = local_90;
      FUN_100040bb4(&local_88,&DAT_100aaa3f8,&DAT_100837fc0);
    }
    else {
      puVar11 = (undefined8 *)(*(long *)(local_b0 + 0x38) + param_1 * 0x50);
      uVar1 = *puVar11;
      uVar4 = puVar11[1];
      uVar2 = puVar11[2];
      uVar5 = puVar11[3];
      uVar3 = puVar11[7];
      uVar6 = puVar11[8];
      uVar7 = *(undefined1 *)(puVar11 + 9);
      bVar8 = *(byte *)((long)puVar11 + 0x49);
      uVar9 = *(undefined2 *)(puVar11 + 4);
      FUN_10051f440(uVar1,uVar4,uVar2,uVar5,uVar9);
      FUN_10050f830(uVar3,uVar6,uVar7,bVar8);
      _swift_release(local_b8);
      FUN_100040bb4(&local_68,&DAT_100aaa400,&DAT_100837ad0);
      local_70 = local_a8;
      FUN_100040bb4(&local_70,&DAT_100aaa3e8,&DAT_100837fb0);
      local_78 = local_a0;
      FUN_100040bb4(&local_78,&DAT_100aaa3e8,&DAT_100837fb0);
      local_80 = local_98;
      FUN_100040bb4(&local_80,&DAT_100aaa3f0,&DAT_100837ae0);
      local_88 = local_90;
      FUN_100040bb4(&local_88,&DAT_100aaa3f8,&DAT_100837fc0);
      FUN_10050f830(uVar3,uVar6,uVar7,bVar8);
      FUN_10051f468(uVar1,uVar4,uVar2,uVar5,uVar9);
      FUN_10051f490(uVar3,uVar6,uVar7,bVar8);
      if ((bVar8 & 1) != 0) {
        __ss12StaticStringV11descriptionSSvg(uVar3,uVar6,uVar7);
      }
    }
  }
  return;
}

