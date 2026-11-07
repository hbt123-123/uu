// rea decompile_all
// name: FUN_10026162c
// address: 0x10026162c
// body: available
// range: 0x10026162c-0x100262083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100261f74) */

void FUN_10026162c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long unaff_x21;
  undefined8 uVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  long local_120;
  long local_118 [4];
  undefined8 local_f0 [3];
  char local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  long alStack_b8 [3];
  long local_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long local_78;
  undefined **ppuStack_70;
  
  lVar2 = 0;
  local_118[3] = param_1;
  FUN_100275594();
  lVar11 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)&local_120 + lVar11);
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar3 + -8);
  uVar14 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_118[1] = (long)puVar12 - uVar14;
  lVar23 = local_118[1] - uVar14;
  puVar4 = &DAT_100a81000;
  FUN_100004bb4(&DAT_100a81000,&DAT_100815140);
  puVar16 = (undefined8 *)
            (lVar23 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar20 = *(long *)(lVar5 + -8);
  uVar14 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar19 = (long)puVar16 - uVar14;
  lVar21 = lVar19 - uVar14;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar16,uVar7,uVar17);
  puVar6 = puVar16;
  (**(code **)(lVar20 + 0x30))(puVar16,1,lVar5);
  if ((int)puVar6 == 1) {
    FUN_100040bb4(puVar16,&DAT_100a81000,&DAT_100815140);
    FUN_100262084();
    _swift_allocError(&DAT_1009a8e98,puVar16,0,0);
    *puVar16 = uVar7;
    puVar16[1] = uVar17;
    *(undefined1 *)(puVar16 + 2) = 7;
    _swift_willThrow();
    _swift_bridgeObjectRetain(uVar17);
    return;
  }
  (**(code **)(lVar20 + 0x20))(lVar21,puVar16,lVar5);
  local_118[0] = lVar21;
  local_118[2] = lVar20;
  (**(code **)(lVar20 + 0x10))(lVar19,lVar21,lVar5);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (lVar23,0x404e000000000000,lVar19,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar17);
  __s10Foundation10URLRequestV10httpMethodSSSgvs(uVar7,uVar17);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + _TtC4Moya8Endpoint::httpHeaderFields));
  __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs();
  FUN_100082394(unaff_x20 + _TtC4Moya8Endpoint::task,puVar12,FUN_100275594);
  puVar6 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar2);
  lVar2 = local_118[2];
  iVar1 = (int)puVar6;
  if (iVar1 < 6) {
    if (2 < iVar1) {
      if (iVar1 == 3) {
        uVar17 = *puVar12;
        local_120 = lVar5;
        FUN_1000a0074((long)local_118 + lVar11,alStack_90);
        ppuVar18 = ppuStack_70;
        lVar11 = local_78;
        FUN_10003f030(alStack_90,local_78);
        ppuStack_98 = &PTR_PTR_1009af618;
        local_a0 = lVar3;
        FUN_1000efc08(alStack_b8);
        (**(code **)(lVar13 + 0x10))();
        uVar7 = uVar17;
        FUN_10026303c(uVar17);
LAB_100261ad4:
        (*(code *)ppuVar18[1])(local_118[3],alStack_b8,uVar7,lVar11,ppuVar18);
        _swift_bridgeObjectRelease(uVar7);
        plVar8 = alStack_b8;
        FUN_10003f094();
        if (unaff_x21 != 0) {
          FUN_100262084();
          _swift_allocError(&DAT_1009a8e98,plVar8,0,0);
          *plVar8 = unaff_x21;
          plVar8[1] = 0;
          *(undefined1 *)(plVar8 + 2) = 8;
          _swift_willThrow();
          _swift_bridgeObjectRelease(uVar17);
          FUN_10003f094(alStack_90);
          (**(code **)(lVar13 + 8))(lVar23,lVar3);
          pcVar15 = *(code **)(local_118[2] + 8);
          lVar5 = local_120;
LAB_100261ccc:
          (*pcVar15)(local_118[0],lVar5);
          return;
        }
        _swift_bridgeObjectRelease(uVar17);
        FUN_10003f094(alStack_90);
        pcVar15 = *(code **)(lVar13 + 8);
      }
      else {
        if (iVar1 == 4) {
          uVar7 = *puVar12;
          uVar17 = *(undefined8 *)((long)local_118 + lVar11);
          uVar22 = *(undefined8 *)((long)local_118 + lVar11 + 8);
          FUN_100008184(uVar7,uVar17);
          __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(uVar7,uVar17);
          ppuStack_70 = &PTR_PTR_1009af618;
          local_78 = lVar3;
          FUN_1000efc08(alStack_90);
          (**(code **)(lVar13 + 0x10))();
          uVar10 = uVar22;
          FUN_10026303c(uVar22);
          FUN_1002c3c68(local_118[3],alStack_90,uVar10,1,0,0,0);
          _swift_bridgeObjectRelease(uVar10);
          plVar8 = alStack_90;
          FUN_10003f094();
          if (unaff_x21 != 0) {
            FUN_100262084();
            _swift_allocError(&DAT_1009a8e98,plVar8,0,0);
            *plVar8 = unaff_x21;
            plVar8[1] = 0;
            *(undefined1 *)(plVar8 + 2) = 8;
            _swift_willThrow();
            _swift_bridgeObjectRelease(uVar22);
            FUN_100006cdc(uVar7,uVar17);
            (**(code **)(lVar13 + 8))(lVar23,lVar3);
            pcVar15 = *(code **)(local_118[2] + 8);
            goto LAB_100261ccc;
          }
          _swift_bridgeObjectRelease(uVar22);
          FUN_100006cdc(uVar7,uVar17);
          (**(code **)(lVar13 + 8))(lVar23,lVar3);
          pcVar15 = *(code **)(local_118[2] + 8);
          lVar11 = local_118[0];
          goto LAB_100261e90;
        }
        uVar17 = *puVar12;
        uVar7 = *(undefined8 *)((long)local_f0 + lVar11);
        FUN_1000a0074((long)local_118 + lVar11,alStack_90);
        FUN_1000b142c(alStack_90,alStack_b8);
        puVar4 = &DAT_100a81010;
        FUN_100004bb4(&DAT_100a81010,&DAT_100815148);
        pcVar9 = local_d8;
        _swift_dynamicCast(pcVar9,alStack_b8,puVar4,&DAT_1009ad5f0,6);
        local_120 = lVar5;
        if (((ulong)pcVar9 & 1) != 0) {
          if (local_d8[0] != '\x02') {
            *(undefined4 *)(lVar21 + -8) = 0;
            *(undefined8 *)(lVar21 + -0x10) = 0x6e;
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,0xd0000000000000d9,0x80000001008a8210,
                       "Moya/Endpoint.swift",0x13,2);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100262084);
            (*pcVar15)();
          }
          FUN_1002632c4(local_d0,uStack_c8);
        }
        ppuVar18 = ppuStack_70;
        lVar11 = local_78;
        FUN_10003f030(alStack_90,local_78);
        ppuStack_98 = &PTR_PTR_1009af618;
        local_a0 = lVar3;
        FUN_1000efc08(alStack_b8);
        pcVar15 = *(code **)(lVar13 + 0x10);
        (*pcVar15)();
        uVar10 = uVar17;
        FUN_10026303c(uVar17);
        lVar2 = local_118[1];
        (*(code *)ppuVar18[1])(local_118[1],alStack_b8,uVar10,lVar11,ppuVar18);
        _swift_bridgeObjectRelease(uVar10);
        plVar8 = alStack_b8;
        FUN_10003f094();
        if (unaff_x21 == 0) {
          _swift_bridgeObjectRelease(uVar17);
          ppuStack_98 = &PTR_PTR_1009af618;
          local_a0 = lVar3;
          FUN_1000efc08(alStack_b8);
          (*pcVar15)();
          uVar17 = uVar7;
          FUN_10026303c(uVar7);
          FUN_1002c3c68(local_118[3],alStack_b8,uVar17,1,0,0,0);
          _swift_bridgeObjectRelease(uVar17);
          FUN_10003f094();
          lVar11 = local_118[0];
          lVar5 = local_120;
          _swift_bridgeObjectRelease(uVar7);
          pcVar15 = *(code **)(lVar13 + 8);
          (*pcVar15)(lVar2,lVar3);
          FUN_10003f094(alStack_90);
          (*pcVar15)(lVar23,lVar3);
          pcVar15 = *(code **)(local_118[2] + 8);
          goto LAB_100261e90;
        }
        FUN_100262084();
        _swift_allocError(&DAT_1009a8e98,plVar8,0,0);
        *plVar8 = unaff_x21;
        plVar8[1] = 0;
        *(undefined1 *)(plVar8 + 2) = 8;
        _swift_willThrow();
        _swift_bridgeObjectRelease(uVar7);
        _swift_bridgeObjectRelease(uVar17);
        FUN_10003f094(alStack_90);
        pcVar15 = *(code **)(lVar13 + 8);
      }
      (*pcVar15)(lVar23,lVar3);
      pcVar15 = *(code **)(local_118[2] + 8);
      lVar11 = local_118[0];
      lVar5 = local_120;
      goto LAB_100261e90;
    }
    if (iVar1 == 0) {
      __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs
                (*puVar12,*(undefined8 *)((long)local_118 + lVar11));
      (**(code **)(lVar2 + 8))(local_118[0],lVar5);
      pcVar15 = *(code **)(lVar13 + 0x20);
      goto LAB_100261e40;
    }
    if (iVar1 == 1) {
      FUN_1000a0074(puVar12,alStack_90);
      uVar7 = 0;
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONEncoderCACycfc();
    }
    else {
      uVar7 = *(undefined8 *)(local_d8 + lVar11 + -0x20);
      FUN_1000a0074(puVar12,alStack_90);
    }
    FUN_100275a8c(local_118[3],alStack_90,uVar7);
    _swift_release(uVar7);
    FUN_10003f094(alStack_90);
    pcVar15 = *(code **)(lVar13 + 8);
LAB_100261be0:
    (*pcVar15)(lVar23,lVar3);
    pcVar15 = *(code **)(lVar2 + 8);
    lVar11 = local_118[0];
LAB_100261e90:
    (*pcVar15)(lVar11,lVar5);
    return;
  }
  if (iVar1 < 9) {
    if ((iVar1 != 6) && (iVar1 != 7)) {
      uVar7 = *(undefined8 *)((long)local_118 + lVar11);
      _swift_bridgeObjectRelease(*puVar12);
      ppuStack_70 = &PTR_PTR_1009af618;
      local_78 = lVar3;
      FUN_1000efc08(alStack_90);
      (**(code **)(lVar13 + 0x10))();
      uVar17 = uVar7;
      FUN_10026303c(uVar7);
      FUN_1002c3c68(local_118[3],alStack_90,uVar17,1,0,0,0);
      _swift_bridgeObjectRelease(uVar17);
      plVar8 = alStack_90;
      FUN_10003f094();
      if (unaff_x21 != 0) {
        FUN_100262084();
        _swift_allocError(&DAT_1009a8e98,plVar8,0,0);
        *plVar8 = unaff_x21;
        plVar8[1] = 0;
        *(undefined1 *)(plVar8 + 2) = 8;
        _swift_willThrow();
        _swift_bridgeObjectRelease(uVar7);
        (**(code **)(lVar13 + 8))(lVar23,lVar3);
        pcVar15 = *(code **)(lVar2 + 8);
        goto LAB_100261ccc;
      }
      _swift_bridgeObjectRelease(uVar7);
      pcVar15 = *(code **)(lVar13 + 8);
      goto LAB_100261be0;
    }
    pcVar15 = *(code **)(local_118[2] + 8);
LAB_100261b80:
    (*pcVar15)(local_118[0],lVar5);
    FUN_1000d27dc(puVar12,FUN_100275594);
  }
  else {
    if (iVar1 == 9) {
      pcVar15 = *(code **)(local_118[2] + 8);
      goto LAB_100261b80;
    }
    if (iVar1 == 10) {
      uVar17 = *puVar12;
      local_120 = lVar5;
      _swift_release(*(undefined8 *)((long)local_f0 + lVar11 + 8));
      FUN_1000a0074((long)local_118 + lVar11,alStack_90);
      ppuVar18 = ppuStack_70;
      lVar11 = local_78;
      FUN_10003f030(alStack_90,local_78);
      ppuStack_98 = &PTR_PTR_1009af618;
      local_a0 = lVar3;
      FUN_1000efc08(alStack_b8);
      (**(code **)(lVar13 + 0x10))();
      uVar7 = uVar17;
      FUN_10026303c(uVar17);
      goto LAB_100261ad4;
    }
    (**(code **)(local_118[2] + 8))(local_118[0],lVar5);
  }
  pcVar15 = *(code **)(lVar13 + 0x20);
LAB_100261e40:
  (*pcVar15)(local_118[3],lVar23,lVar3);
  return;
}

