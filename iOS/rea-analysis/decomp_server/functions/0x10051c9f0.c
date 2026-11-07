// rea decompile_all
// name: FUN_10051c9f0
// address: 0x10051c9f0
// body: available
// range: 0x10051c9f0-0x10051cbb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10051c9f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  (**(code **)(param_3 + 8))(&local_a0,param_1,param_3);
  lVar2 = local_98;
  FUN_10051dca8();
  _swift_bridgeObjectRelease(local_98);
  _swift_release(local_a0);
  local_58 = local_90;
  FUN_100040bb4(&local_58,&DAT_100aaa3e8,&DAT_100837fb0);
  local_60 = local_88;
  FUN_100040bb4(&local_60,&DAT_100aaa3e8,&DAT_100837fb0);
  local_68 = local_80;
  FUN_100040bb4(&local_68,&DAT_100aaa3f0,&DAT_100837ae0);
  local_70 = local_78;
  FUN_100040bb4(&local_70,&DAT_100aaa3f8,&DAT_100837fc0);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(lVar2);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    FUN_100511680(0,lVar4,0);
    pbVar7 = (byte *)(lVar2 + 0x41);
    do {
      uVar5 = *(undefined8 *)(pbVar7 + -0x11);
      uVar6 = *(undefined8 *)(pbVar7 + -9);
      if ((*pbVar7 & 1) == 0) {
        _swift_bridgeObjectRetain(uVar6);
      }
      else {
        __ss12StaticStringV11descriptionSSvg(uVar5,uVar6,pbVar7[-1]);
      }
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_100511680(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x20) = uVar5;
      *(undefined8 *)(puVar3 + uVar1 * 0x10 + 0x28) = uVar6;
      pbVar7 = pbVar7 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    _swift_bridgeObjectRelease(lVar2);
  }
  return puVar3;
}

