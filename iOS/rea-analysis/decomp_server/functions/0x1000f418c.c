// rea decompile_all
// name: FUN_1000f418c
// address: 0x1000f418c
// body: available
// range: 0x1000f418c-0x1000f43b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_1000f418c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_290 [4];
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = (undefined8 *)((long)local_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation12NotificationV6objectypSgvg(auStack_180);
  if (local_168 == 0) {
    FUN_100040bb4(auStack_180,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    puVar2 = &local_190;
    _swift_dynamicCast(puVar2,auStack_180,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar2 & 1) != 0) {
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar4 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
      local_290[1] = local_190;
      local_290[2] = uStack_188;
      local_290[0] = uVar4;
      FUN_1000f43b4(local_290 + 1);
      uStack_98 = uStack_1c0;
      local_a0 = local_1c8;
      uStack_88 = uStack_1b0;
      uStack_90 = uStack_1b8;
      uStack_78 = uStack_1a0;
      local_80 = local_1a8;
      local_70 = local_198;
      uStack_d8 = uStack_200;
      local_e0 = local_208;
      uStack_c8 = uStack_1f0;
      uStack_d0 = uStack_1f8;
      uStack_b8 = uStack_1e0;
      local_c0 = local_1e8;
      uStack_a8 = uStack_1d0;
      uStack_b0 = uStack_1d8;
      uStack_118 = uStack_240;
      local_120 = local_248;
      uStack_108 = uStack_230;
      uStack_110 = local_238;
      uStack_f8 = uStack_220;
      local_100 = local_228;
      uStack_e8 = uStack_210;
      uStack_f0 = local_218;
      uStack_158 = local_290[2];
      local_160 = local_290[1];
      uStack_148 = uStack_270;
      uStack_150 = local_290[3];
      uStack_138 = uStack_260;
      local_140 = local_268;
      uStack_128 = uStack_250;
      uStack_130 = local_258;
      *puVar5 = 1;
      (**(code **)(lVar6 + 0x68))
                (puVar5,*(undefined4 *)
                         PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar1);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar4);
      uVar3 = 0;
      FUN_1000fd494(0);
      FUN_1005d68b4(&local_160,puVar5,uVar4,0,0,uVar3,&PTR_PTR_10099cbd8);
      _swift_bridgeObjectRelease(uStack_188);
      (**(code **)(lVar6 + 8))(puVar5,lVar1);
    }
  }
  return;
}

