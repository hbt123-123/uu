// rea decompile_all
// name: FUN_1000fce34
// address: 0x1000fce34
// body: available
// range: 0x1000fce34-0x1000fd0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000fce34(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 auStack_290 [2];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined2 local_168;
  undefined6 uStack_166;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  
  _swift_getObjectType();
  puVar2 = (undefined8 *)0x0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar10 = puVar2[-1];
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = (undefined8 *)((long)auStack_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1005fdafc();
  uVar8 = *puVar3;
  uVar1 = puVar3[1];
  puVar4 = &_OBJC_CLASS___NSXPCConnection;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  plVar5 = (long *)_objc_msgSend((ID)puVar4,"initWithMachServiceName:options:",uVar8,0);
  FUN_1005d451c(0);
  _swift_allocObject();
  FUN_1005d1830();
  pcVar6 = FUN_100103400;
  (**(code **)(*plVar5 + 0xa8))(FUN_100103400,auStack_290);
  _swift_release(plVar5);
  uVar8 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer19XPCControlledClient::connection);
  *(code **)(unaff_x20 + _TtC14UURemoteServer19XPCControlledClient::connection) = pcVar6;
  _swift_retain(pcVar6);
  _swift_release(uVar8);
  (**(code **)(*(long *)pcVar6 + 0xb0))(1);
  _swift_release(pcVar6);
  local_168 = 0x304;
  FUN_100103418(&local_168);
  uStack_198 = uStack_a0;
  local_1a0 = local_a8;
  uStack_188 = uStack_90;
  uStack_190 = uStack_98;
  uStack_178 = uStack_80;
  local_180 = local_88;
  local_170 = local_78;
  uStack_1d8 = uStack_e0;
  local_1e0 = local_e8;
  uStack_1c8 = uStack_d0;
  uStack_1d0 = uStack_d8;
  uStack_1b8 = uStack_c0;
  local_1c0 = local_c8;
  uStack_1a8 = uStack_b0;
  uStack_1b0 = uStack_b8;
  uStack_218 = uStack_120;
  local_220 = local_128;
  uStack_208 = uStack_110;
  uStack_210 = uStack_118;
  uStack_1f8 = uStack_100;
  local_200 = local_108;
  uStack_1e8 = uStack_f0;
  uStack_1f0 = uStack_f8;
  local_260 = CONCAT62(uStack_166,local_168);
  uStack_258 = uStack_160;
  uStack_248 = uStack_150;
  uStack_250 = uStack_158;
  uStack_238 = uStack_140;
  local_240 = local_148;
  uStack_228 = uStack_130;
  uStack_230 = uStack_138;
  puVar4 = &DAT_10099d3c8;
  _swift_allocObject(&DAT_10099d3c8,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *puVar9 = 1;
  (**(code **)(lVar10 + 0x68))
            (puVar9,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
             puVar2);
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  lVar7 = unaff_x20;
  FUN_1000fd494();
  FUN_1005d68b4(&local_260,puVar9,unaff_x20,FUN_100103444,puVar4,lVar7,&PTR_PTR_10099cbd8);
  _swift_release(puVar4);
  (**(code **)(lVar10 + 8))(puVar9,puVar2);
  return;
}

