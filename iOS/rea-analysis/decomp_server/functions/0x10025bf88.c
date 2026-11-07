// rea decompile_all
// name: FUN_10025bf88
// address: 0x10025bf88
// body: available
// range: 0x10025bf88-0x10025c9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010025c564) */

void FUN_10025bf88(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,code *param_9,
                  undefined8 param_10)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  code *local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined *local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long lStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  local_140 = param_3;
  local_120 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar17 = *(long *)(lVar2 + -8);
  lVar10 = (long)&local_150 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_100 = lVar10;
  lStack_f8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_110 = *(long *)(lVar3 + -8);
  lVar10 = lVar10 - (*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_118 = lVar10;
  lStack_108 = lVar3;
  __s8Dispatch0A4TimeVMa();
  lVar3 = *(long *)(lVar2 + -8);
  uVar11 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uVar11;
  local_130 = (undefined *)(lVar10 - uVar11);
  local_128 = lVar2;
  _swift_beginAccess(param_5 + 0x10,auStack_90,0,0);
  param_5 = param_5 + 0x10;
  _swift_weakLoadStrong();
  if (param_5 == 0) {
    return;
  }
  local_138 = param_10;
  if (((uint)param_4 >> 8 & 1) == 0) {
    if (param_9 != (code *)0x0) {
      if (SBORROW8(*(long *)(param_5 + 0x48),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025c990);
        (*pcVar1)();
      }
      *(long *)(param_5 + 0x48) = *(long *)(param_5 + 0x48) + -1;
    }
    puVar14 = *(undefined **)(param_2 + 0x10);
    if (puVar14 + -400 < (undefined *)0xffffffffffffff38) {
      local_f0 = (undefined *)0x0;
      local_e8 = 0xe000000000000000;
      _swift_retain(param_2);
      __ss11_StringGutsV4growyySiF(0x2a);
      _swift_bridgeObjectRelease(local_e8);
      local_f0 = (undefined *)0xd000000000000027;
      local_e8 = 0x80000001008a80f0;
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      local_b0 = puVar14;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      FUN_10025fdac(param_2,local_140,param_4,0);
      _swift_bridgeObjectRelease(local_e8);
      lVar17 = *(long *)(param_5 + 0x48);
    }
    else {
      uVar7 = 0;
      uVar9 = 0;
      FUN_100273438(0,0);
      local_f0 = (undefined *)0x0;
      local_e8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x23);
      _swift_bridgeObjectRelease(local_e8);
      local_f0 = (undefined *)0xd00000000000001f;
      local_e8 = 0x80000001008a80d0;
      __sSS6appendyySSF(uVar7,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      __sSS6appendyySSF(0x2e27,0xe200000000000000);
      _swift_bridgeObjectRelease(local_e8);
      __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF(*(undefined8 *)(param_5 + 0x30));
      _swift_beginAccess(param_5 + 0x28,&local_b0,0,0);
      lVar2 = *(long *)(param_5 + 0x28);
      lVar10 = *(long *)(lVar2 + 0x10);
      lVar3 = local_140;
      while (local_140 = lVar17, lVar10 != 0) {
        _swift_beginAccess(param_5 + 0x28,&local_f0,0x21,0);
        lVar3 = 0;
        lVar17 = 1L << ((ulong)*(byte *)(lVar2 + 0x20) & 0x3f);
        uVar11 = lVar17 + 0x3fU >> 6;
        puVar12 = (ulong *)(lVar2 + 0x38);
        do {
          uVar13 = *puVar12;
          if (uVar13 != 0) {
            uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            lVar17 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) - lVar3;
            break;
          }
          lVar3 = lVar3 + -0x40;
          uVar11 = uVar11 - 1;
          puVar12 = puVar12 + 1;
        } while (uVar11 != 0);
        FUN_10025eff0(&local_c0,lVar17,*(undefined4 *)(lVar2 + 0x24),0);
        _swift_endAccess(&local_f0);
        lVar17 = lStack_b8;
        puVar5 = local_c0;
        local_120 = *(undefined8 *)(param_5 + 0x20);
        puVar14 = &DAT_1009a8798;
        _swift_allocObject(&DAT_1009a8798,0x18,7);
        _swift_weakInit(puVar14 + 0x10,param_5);
        puVar4 = &DAT_1009a87e8;
        _swift_allocObject(&DAT_1009a87e8,0x40,7);
        uVar7 = local_138;
        *(undefined **)(puVar4 + 0x10) = puVar14;
        *(code **)(puVar4 + 0x18) = param_9;
        *(undefined8 *)(puVar4 + 0x20) = local_138;
        *(undefined **)(puVar4 + 0x28) = puVar5;
        local_130 = puVar5;
        local_128 = lVar17;
        *(long *)(puVar4 + 0x30) = lVar17;
        *(long *)(puVar4 + 0x38) = param_8;
        local_d0 = FUN_10025fd88;
        local_f0 = PTR___NSConcreteStackBlock_100995490;
        local_e8 = 0x42000000;
        local_e0 = FUN_1000acdb4;
        puStack_d8 = &DAT_1009a8800;
        local_c8 = puVar4;
        pvVar8 = __Block_copy(&local_f0);
        FUN_10004090c(param_9,uVar7);
        _swift_retain(puVar14);
        FUN_100008184(puVar5,lVar17);
        lVar17 = local_118;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
        local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar4 = &DAT_100a80cc0;
        FUN_100005c90(&DAT_100a80cc0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar5 = &DAT_100a80cc8;
        FUN_100004bb4(&DAT_100a80cc8,&DAT_100814f60);
        puVar6 = &DAT_100a80cd0;
        FUN_1000d61d8(&DAT_100a80cd0,&DAT_100a80cc8,&DAT_100814f60);
        lVar3 = lStack_f8;
        lVar2 = local_100;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_100,&local_c0,puVar5,puVar6,lStack_f8,puVar4);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar17,lVar2,pvVar8);
        __Block_release(pvVar8);
        FUN_100006cdc(local_130,local_128);
        (**(code **)(local_140 + 8))(lVar2,lVar3);
        (**(code **)(local_110 + 8))(lVar17,lStack_108);
        puVar4 = local_c8;
        _swift_release(puVar14);
        _swift_release(puVar4);
        lVar2 = *(long *)(param_5 + 0x28);
        lVar17 = local_140;
        lVar3 = local_140;
        lVar10 = *(long *)(lVar2 + 0x10);
      }
      local_140 = lVar3;
      __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF(*(undefined8 *)(param_5 + 0x30));
      lVar17 = *(long *)(param_5 + 0x48);
    }
  }
  else {
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF(*(undefined8 *)(param_5 + 0x30));
    _swift_beginAccess(param_5 + 0x28,&local_f0,0x21,0);
    uVar7 = local_120;
    FUN_100008184(local_120,param_7);
    FUN_10025d790(&local_b0,uVar7,param_7);
    _swift_endAccess(&local_f0);
    FUN_100006cdc(local_b0,uStack_a8);
    __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF(*(undefined8 *)(param_5 + 0x30));
    if (param_8 < 1) {
      if (param_9 == (code *)0x0) goto LAB_10025c960;
      if (SBORROW8(*(long *)(param_5 + 0x48),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025c9b4);
        (*pcVar1)();
      }
      *(long *)(param_5 + 0x48) = *(long *)(param_5 + 0x48) + -1;
      lVar17 = *(long *)(param_5 + 0x48);
    }
    else {
      local_f0 = (undefined *)0x0;
      local_e8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x29);
      if (DAT_100a7fea0 != -1) {
        _swift_once(&DAT_100a7fea0,FUN_10025674c);
      }
      plVar15 = *(long **)(DAT_100b36400 + 0x10);
      pcVar1 = *(code **)(*plVar15 + 0x110);
      plVar16 = plVar15;
      _swift_retain();
      (*pcVar1)();
      _swift_release(plVar15);
      if (SCARRY8((long)plVar16,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025c9ac);
        (*pcVar1)();
      }
      local_b0 = (undefined *)(((long)plVar16 + 1) - param_8);
      local_140 = lVar17;
      if (SBORROW8((long)plVar16 + 1,param_8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025c9b0);
        (*pcVar1)();
      }
      puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar14);
      __sSS6appendyySSF(0xd000000000000024,0x80000001008a8120);
      plVar16 = *(long **)(DAT_100b36400 + 0x10);
      pcVar1 = *(code **)(*plVar16 + 0x128);
      _swift_retain(plVar16);
      (*pcVar1)();
      _swift_release(plVar16);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                (param_1,&local_f0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      _swift_bridgeObjectRelease(local_e8);
      local_148 = *(undefined8 *)(param_5 + 0x20);
      __s8Dispatch0A4TimeV3nowACyFZ(lVar10);
      plVar16 = *(long **)(DAT_100b36400 + 0x10);
      pcVar1 = *(code **)(*plVar16 + 0x128);
      _swift_retain(plVar16);
      (*pcVar1)();
      _swift_release(plVar16);
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_130,param_1,lVar10);
      local_150 = *(code **)(lVar3 + 8);
      (*local_150)(lVar10,local_128);
      puVar14 = &DAT_1009a8798;
      _swift_allocObject(&DAT_1009a8798,0x18,7);
      _swift_weakInit(puVar14 + 0x10,param_5);
      puVar4 = &DAT_1009a8838;
      _swift_allocObject(&DAT_1009a8838,0x40,7);
      uVar9 = local_120;
      uVar7 = local_138;
      *(undefined **)(puVar4 + 0x10) = puVar14;
      *(undefined8 *)(puVar4 + 0x18) = local_120;
      *(undefined8 *)(puVar4 + 0x20) = param_7;
      *(long *)(puVar4 + 0x28) = param_8;
      *(code **)(puVar4 + 0x30) = param_9;
      *(undefined8 *)(puVar4 + 0x38) = local_138;
      local_d0 = FUN_10025feb4;
      local_f0 = PTR___NSConcreteStackBlock_100995490;
      local_e8 = 0x42000000;
      local_e0 = FUN_1000acdb4;
      puStack_d8 = &DAT_1009a8850;
      local_c8 = puVar4;
      pvVar8 = __Block_copy(&local_f0);
      FUN_100008184(uVar9,param_7);
      _swift_retain(puVar14);
      FUN_10004090c(param_9,uVar7);
      lVar17 = local_118;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar4 = &DAT_100a80cc0;
      FUN_100005c90(&DAT_100a80cc0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar5 = &DAT_100a80cc8;
      FUN_100004bb4(&DAT_100a80cc8,&DAT_100814f60);
      puVar6 = &DAT_100a80cd0;
      FUN_1000d61d8(&DAT_100a80cd0,&DAT_100a80cc8,&DAT_100814f60);
      lVar3 = lStack_f8;
      lVar2 = local_100;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_100,&local_b0,puVar5,puVar6,lStack_f8,puVar4);
      puVar4 = local_130;
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (local_130,lVar17,lVar2,pvVar8);
      __Block_release(pvVar8);
      (**(code **)(local_140 + 8))(lVar2,lVar3);
      (**(code **)(local_110 + 8))(lVar17,lStack_108);
      (*local_150)(puVar4,local_128);
      puVar4 = local_c8;
      _swift_release(puVar14);
      _swift_release(puVar4);
      lVar17 = *(long *)(param_5 + 0x48);
    }
  }
  if ((lVar17 == 0) && (param_9 != (code *)0x0)) {
    (*param_9)();
  }
LAB_10025c960:
  _swift_release(param_5);
  return;
}

