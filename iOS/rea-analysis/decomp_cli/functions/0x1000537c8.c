// rea decompile_all
// name: FUN_1000537c8
// address: 0x1000537c8
// body: available
// range: 0x1000537c8-0x100053b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000537c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_128;
  long local_120;
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
  long local_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (DAT_1001039d8 != -1) {
    _swift_once(&DAT_1001039d8,FUN_100053418);
  }
  lVar1 = DAT_100106ee0;
  _os_unfair_lock_lock(DAT_100106ee0 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  *(long *)(lVar1 + 0x10) = param_1;
  *(long *)(lVar1 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _os_unfair_lock_unlock(lVar1 + 0x20);
  if ((param_1 != 0x68737a) || (param_2 != -0x1d00000000000000)) {
    uVar3 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x68737a,0xe300000000000000,param_1,param_2,0);
    if ((uVar3 & 1) == 0) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x68737a,0xe300000000000000,0x68736162,0xe400000000000000,0);
      if ((param_1 != 0x68736162) || (param_2 != -0x1c00000000000000)) {
        uVar3 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x68736162,0xe400000000000000,param_1,param_2,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x68737a,0xe300000000000000,0x68736966,0xe400000000000000,0);
          if ((uVar3 & 1) == 0) {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x68736162,0xe400000000000000,0x68736966,0xe400000000000000,0);
          }
          if ((param_1 != 0x68736966) || (param_2 != -0x1c00000000000000)) {
            uVar3 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x68736966,0xe400000000000000,param_1,param_2,0);
            if ((uVar3 & 1) == 0) {
              local_128 = 0;
              local_120 = 0xe000000000000000;
              __ss11_StringGutsV4growyySiF(0x1b);
              __sSS6appendyySSF(0xd000000000000019,0x80000001000c9110);
              local_c0 = param_1;
              lStack_b8 = param_2;
              __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                        (&local_c0,&local_128,&DAT_1000f6ff8,
                         PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                         PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,local_128,local_120,
                         "ArgumentParser/CompletionsGenerator.swift",0x29,2,0x89,0);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100053b50);
              (*pcVar2)();
            }
          }
          puVar4 = &DAT_100103f10;
          FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
          uVar5 = 0x30;
          _swift_allocObject();
          *(undefined8 *)(puVar4 + 0x18) = 2;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          *(undefined8 *)(puVar4 + 0x20) = param_3;
          *(undefined8 *)(puVar4 + 0x28) = param_4;
          FUN_1000a192c(&local_128);
          uStack_98 = uStack_f8;
          local_a0 = local_100;
          uStack_88 = uStack_e8;
          uStack_90 = uStack_f0;
          uStack_78 = uStack_d8;
          local_80 = local_e0;
          uStack_68 = uStack_c8;
          uStack_70 = uStack_d0;
          lStack_b8 = uStack_118;
          local_c0 = local_120;
          uStack_a8 = uStack_108;
          uStack_b0 = uStack_110;
          FUN_1000546a4();
          goto LAB_1000538d8;
        }
      }
      puVar4 = &DAT_100103f10;
      FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
      uVar5 = 0x30;
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined8 *)(puVar4 + 0x20) = param_3;
      *(undefined8 *)(puVar4 + 0x28) = param_4;
      FUN_1000a192c(&local_128);
      uStack_98 = uStack_f8;
      local_a0 = local_100;
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      local_80 = local_e0;
      uStack_68 = uStack_c8;
      uStack_70 = uStack_d0;
      lStack_b8 = uStack_118;
      local_c0 = local_120;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      FUN_10004f768();
      goto LAB_1000538d8;
    }
  }
  puVar4 = &DAT_100103f10;
  FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
  uVar5 = 0x30;
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  FUN_1000a192c(&local_128);
  uStack_98 = uStack_f8;
  local_a0 = local_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  local_80 = local_e0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  lStack_b8 = uStack_118;
  local_c0 = local_120;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  FUN_100058b20();
LAB_1000538d8:
  FUN_100054630(&local_128);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}

