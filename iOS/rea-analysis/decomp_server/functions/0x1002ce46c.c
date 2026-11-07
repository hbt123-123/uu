// rea decompile_all
// name: FUN_1002ce46c
// address: 0x1002ce46c
// body: available
// range: 0x1002ce46c-0x1002cfa4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1002ce46c(void)

{
  long lVar1;
  long lVar2;
  long ******pppppplVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long ******pppppplVar9;
  ID IVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ID IVar13;
  ID IVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long ******pppppplVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long lVar21;
  char *pcVar22;
  undefined8 uVar23;
  char *pcVar24;
  long *******ppppppplVar25;
  long lVar26;
  ulong uVar27;
  long unaff_x20;
  long ******pppppplVar28;
  long *******ppppppplVar29;
  long ****pppplVar30;
  long ******pppppplVar31;
  long *****ppppplVar32;
  long ******pppppplVar33;
  ulong uVar34;
  undefined1 auVar35 [16];
  undefined8 auStack_220 [4];
  long *******local_200;
  ID local_1f8;
  long local_1f0;
  long ******local_1e8;
  long local_1e0;
  long local_1d8;
  long ******local_1d0;
  long ******local_1c8;
  long *******local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long ******local_1a0;
  undefined8 uStack_198;
  long *******local_110;
  long *******ppppppplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *******local_e0;
  long *******local_d8;
  ulong local_c8;
  undefined8 uStack_c0;
  long *****ppppplStack_b8;
  long *******local_b0;
  long *******local_a8;
  long *******local_a0;
  long ******apppppplStack_98 [3];
  undefined1 auStack_80 [32];
  
  puVar12 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar26 = (long)&local_200 -
           (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_1a0 = (long ******)lVar26;
  __s10Foundation3URLVMa();
  local_1a8 = *(long *)(lVar6 + -8);
  lVar26 = lVar26 - (*(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_1b8 = lVar26;
  local_1b0 = lVar6;
  FUN_1002c76a8();
  pppppplVar28 = (long ******)
                 (lVar26 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar26 = *(long *)(lVar6 + -8);
  lVar7 = (long)pppppplVar28 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pppppplVar31 = *(long *******)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  pppplVar30 = pppppplVar31[2][2];
  _os_unfair_lock_lock(pppplVar30);
  pppppplVar33 = (long ******)(*pppppplVar31)[0xc];
  _swift_beginAccess((undefined *)((long)pppppplVar31 + (long)pppppplVar33),auStack_80,0,0);
  local_1d0 = pppppplVar33;
  local_1c8 = pppppplVar31;
  FUN_100082394((undefined *)((long)pppppplVar31 + (long)pppppplVar33),pppppplVar28,FUN_1002c76a8);
  ppppplVar32 = pppppplVar28[0x29];
  _swift_bridgeObjectRetain(ppppplVar32);
  local_1c0 = (long *******)pppppplVar28;
  FUN_1000d27dc(pppppplVar28,FUN_1002c76a8);
  _os_unfair_lock_unlock(pppplVar30);
  if (ppppplVar32[2] == (long ****)0x0) {
    _swift_bridgeObjectRelease(ppppplVar32);
  }
  else {
    (**(code **)(lVar26 + 0x10))
              (lVar7,(long)ppppplVar32 +
                     *(long *)(lVar26 + 0x48) * ((long)ppppplVar32[2] + -1) +
                     ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff)),lVar6);
    _swift_bridgeObjectRelease(ppppplVar32);
    pppppplVar28 = local_1a0;
    __s10Foundation10URLRequestV3urlAA3URLVSgvg(local_1a0);
    lVar2 = local_1a8;
    lVar1 = local_1b0;
    pppppplVar31 = pppppplVar28;
    (**(code **)(local_1a8 + 0x30))(pppppplVar28,1,local_1b0);
    lVar21 = local_1b8;
    if ((int)pppppplVar31 == 1) {
      (**(code **)(lVar26 + 8))(lVar7,lVar6);
      FUN_100040bb4(pppppplVar28,&DAT_100a83428,&DAT_100817bb0);
    }
    else {
      lVar8 = local_1b8;
      local_1e0 = lVar26;
      (**(code **)(lVar2 + 0x20))(local_1b8,pppppplVar28,lVar1);
      __s10Foundation3URLV4hostSSSgvg();
      if (pppppplVar28 == (long ******)0x0) {
        (**(code **)(lVar2 + 8))(lVar21,lVar1);
        pcVar4 = *(code **)(local_1e0 + 8);
      }
      else {
        lVar26 = lVar8;
        lVar21 = (long)pppppplVar28;
        local_1f0 = lVar6;
        __s10Foundation10URLRequestV10httpMethodSSSgvg();
        if (lVar21 != 0) {
          pppppplVar31 = (long ******)&DAT_100a833d8;
          local_1d8 = lVar7;
          FUN_100004bb4(&DAT_100a833d8,&DAT_1008178b0);
          _swift_allocObject();
          uStack_198 = 2;
          local_1a0 = (long ******)0x1;
          pppppplVar31[3] = (long *****)0x2;
          pppppplVar31[2] = (long *****)0x1;
          pppppplVar31[4] = (long *****)0x2d206c7275632024;
          pppppplVar31[5] = (long *****)0xe900000000000076;
          local_e0 = (long *******)0x20582d;
          local_d8 = (long *******)0xe300000000000000;
          __sSS6appendyySSF(lVar26,lVar21);
          _swift_bridgeObjectRelease(lVar21);
          ppppppplVar20 = local_d8;
          ppppppplVar29 = local_e0;
          ppppplVar32 = pppppplVar31[2];
          local_1e8 = pppppplVar31;
          if ((long *****)((ulong)pppppplVar31[3] >> 1) <= ppppplVar32) {
            local_1e8 = (long ******)(ulong)((long *****)0x1 < pppppplVar31[3]);
            FUN_1002968f4(local_1e8,(long *****)((long)ppppplVar32 + 1U),1,pppppplVar31);
          }
          local_1e8[2] = (long *****)((long)ppppplVar32 + 1U);
          local_1e8[(long)ppppplVar32 * 2 + 4] = (long *****)ppppppplVar29;
          local_1e8[(long)ppppplVar32 * 2 + 5] = (long *****)ppppppplVar20;
          pppppplVar31 = (long ******)(unaff_x20 + _TtC9Alamofire7Request::delegate);
          pcVar22 = (char *)apppppplStack_98;
          _swift_beginAccess(pppppplVar31,pcVar22,0,0);
          pppppplVar33 = pppppplVar31;
          _swift_unknownObjectWeakLoadStrong();
          if (pppppplVar33 == (long ******)0x0) {
            _swift_bridgeObjectRelease(pppppplVar28);
          }
          else {
            ppppplVar32 = pppppplVar31[1];
            pppppplVar9 = pppppplVar33;
            _swift_getObjectType();
            (*(code *)ppppplVar32[1])();
            _swift_unknownObjectRelease(pppppplVar33);
            pcVar22 = "URLCredentialStorage";
            IVar10 = _objc_msgSend((ID)pppppplVar9,"URLCredentialStorage");
            ppppppplVar29 = (long *******)0x0;
            if (IVar10 == 0) {
              _swift_bridgeObjectRelease(pppppplVar28);
            }
            else {
              local_1f8 = IVar10;
              __s10Foundation3URLV4portSiSgvg();
              local_200 = (long *******)0x0;
              if (((ulong)pcVar22 & 1) == 0) {
                local_200 = ppppppplVar29;
              }
              __s10Foundation3URLV6schemeSSSgvg();
              uVar11 = *(undefined8 *)PTR__NSURLAuthenticationMethodHTTPBasic_1009951e8;
              lVar6 = lVar8;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar8,pppppplVar28);
              if ((long *******)pcVar22 == (long *******)0x0) {
                ppppppplVar29 = (long *******)0x0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppppppplVar29,pcVar22);
                _swift_bridgeObjectRelease(pcVar22);
              }
              puVar12 = &_OBJC_CLASS___NSURLProtectionSpace;
              _objc_allocWithZone();
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar8,pppppplVar28);
              _swift_bridgeObjectRelease(pppppplVar28);
              pppppplVar33 = (long ******)
                             _objc_msgSend((ID)puVar12,
                                           "initWithHost:port:protocol:realm:authenticationMethod:",
                                           lVar6,local_200,ppppppplVar29,lVar8,uVar11);
              IVar10 = _objc_msgSend(local_1f8,"credentialsForProtectionSpace:",pppppplVar33);
              pppppplVar28 = local_1c8;
              if (IVar10 == 0) {
                pppplVar30 = local_1c8[2][2];
                _os_unfair_lock_lock(pppplVar30);
                ppppppplVar29 = local_1c0;
                pcVar4 = FUN_1002c76a8;
                FUN_100082394((undefined *)((long)pppppplVar28 + (long)local_1d0),local_1c0,
                              FUN_1002c76a8);
                ppppplVar32 = (long *****)ppppppplVar29[0x28];
                FUN_1000d27dc(ppppppplVar29);
                _os_unfair_lock_unlock(pppplVar30);
                pcVar22 = (char *)(long *******)pcVar4;
                if (ppppplVar32 != (long *****)0x0) {
                  pcVar24 = "user";
                  IVar10 = _objc_msgSend((ID)ppppplVar32,"user");
                  pcVar22 = pcVar24;
                  if (IVar10 != 0) {
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                    pcVar22 = "password";
                    IVar13 = _objc_msgSend((ID)ppppplVar32,"password");
                    if (IVar13 == 0) {
                      _swift_bridgeObjectRelease(pcVar24);
                    }
                    else {
                      local_1c0 = (long *******)pppppplVar33;
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                      local_e0 = (long *******)0x20752d;
                      local_d8 = (long *******)0xe300000000000000;
                      __sSS6appendyySSF(IVar10,pcVar24);
                      _swift_bridgeObjectRelease(pcVar24);
                      __sSS6appendyySSF(0x3a,0xe100000000000000);
                      ppppppplVar19 = (long *******)pcVar22;
                      __sSS6appendyySSF(IVar13);
                      _swift_bridgeObjectRelease(pcVar22);
                      ppppppplVar18 = local_d8;
                      ppppppplVar20 = local_e0;
                      ppppplVar32 = local_1e8[2];
                      ppppppplVar29 = (long *******)((long)ppppplVar32 + 1);
                      pppppplVar28 = local_1e8;
                      if ((long *****)((ulong)local_1e8[3] >> 1) <= ppppplVar32) {
                        pppppplVar28 = (long ******)(ulong)((long *****)0x1 < local_1e8[3]);
                        ppppppplVar19 = ppppppplVar29;
                        FUN_1002968f4(pppppplVar28,ppppppplVar29,1);
                      }
                      pppppplVar28[2] = (long *****)ppppppplVar29;
                      pppppplVar28[(long)ppppplVar32 * 2 + 4] = (long *****)ppppppplVar20;
                      pppppplVar28[(long)ppppplVar32 * 2 + 5] = (long *****)ppppppplVar18;
                      pcVar22 = (char *)ppppppplVar19;
                      local_1e8 = pppppplVar28;
                    }
                  }
                }
              }
              else {
                uVar11 = 0;
                local_1c8 = pppppplVar31;
                local_1c0 = (long *******)pppppplVar33;
                FUN_10004003c(0,&DAT_100a83d38,&PTR__OBJC_CLASS___NSURLCredential_100a65920);
                pcVar22 = PTR___sSSN_1009957f8;
                __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                          (IVar10,PTR___sSSN_1009957f8,uVar11,PTR___sSSSHsWP_100995808);
                uVar27 = 1L << ((ulong)*(byte *)(IVar10 + 0x20) & 0x3f);
                uVar34 = 0xffffffffffffffff;
                if ((long)uVar27 < 0x40) {
                  uVar34 = ~(-1L << (uVar27 & 0x3f));
                }
                uVar34 = uVar34 & *(ulong *)(IVar10 + 0x40);
                _swift_bridgeObjectRetain(IVar10);
                lVar6 = 0;
                while( true ) {
                  while (uVar34 != 0) {
                    uVar16 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar34 = uVar34 - 1 & uVar34;
                    IVar13 = *(ID *)(*(long *)(IVar10 + 0x38) +
                                    (lVar6 << 9 | LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) << 3));
                    pcVar24 = "user";
                    IVar14 = _objc_msgSend(IVar13,"user");
                    pcVar22 = pcVar24;
                    if (IVar14 != 0) {
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                      pcVar22 = "password";
                      pppppplVar28 = (long ******)_objc_msgSend(IVar13,"password");
                      if (pppppplVar28 == (long ******)0x0) {
                        _swift_bridgeObjectRelease(pcVar24);
                      }
                      else {
                        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                  ();
                        local_e0 = (long *******)0x20752d;
                        local_d8 = (long *******)0xe300000000000000;
                        local_200 = (long *******)pcVar22;
                        local_1d0 = pppppplVar28;
                        __sSS6appendyySSF(IVar14,pcVar24);
                        _swift_bridgeObjectRelease(pcVar24);
                        __sSS6appendyySSF(0x3a,0xe100000000000000);
                        ppppppplVar29 = local_200;
                        pcVar22 = (char *)local_200;
                        __sSS6appendyySSF(local_1d0);
                        _swift_bridgeObjectRelease(ppppppplVar29);
                        ppppppplVar20 = local_d8;
                        ppppplVar32 = local_1e8[2];
                        ppppppplVar29 = (long *******)((long)ppppplVar32 + 1);
                        pppppplVar28 = local_1e8;
                        ppppppplVar18 = local_e0;
                        if ((long *****)((ulong)local_1e8[3] >> 1) <= ppppplVar32) {
                          pppppplVar28 = (long ******)(ulong)((long *****)0x1 < local_1e8[3]);
                          local_1d0 = (long ******)local_e0;
                          pcVar22 = (char *)ppppppplVar29;
                          FUN_1002968f4(pppppplVar28,ppppppplVar29,1);
                          ppppppplVar18 = (long *******)local_1d0;
                        }
                        pppppplVar28[2] = (long *****)ppppppplVar29;
                        pppppplVar28[(long)ppppplVar32 * 2 + 4] = (long *****)ppppppplVar18;
                        pppppplVar28[(long)ppppplVar32 * 2 + 5] = (long *****)ppppppplVar20;
                        local_1e8 = pppppplVar28;
                      }
                    }
                  }
                  bVar5 = SCARRY8(lVar6,1);
                  lVar6 = lVar6 + 1;
                  if (bVar5) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002cf060);
                    (*pcVar4)();
                  }
                  if ((long)(uVar27 + 0x3f >> 6) <= lVar6) break;
                  uVar34 = ((ulong *)(IVar10 + 0x40))[lVar6];
                }
                _swift_bridgeObjectRelease(IVar10);
                _swift_release(IVar10);
                pppppplVar31 = local_1c8;
              }
            }
          }
          pppppplVar28 = pppppplVar31;
          _swift_unknownObjectWeakLoadStrong();
          if (pppppplVar28 != (long ******)0x0) {
            ppppplVar32 = pppppplVar31[1];
            pppppplVar33 = pppppplVar28;
            _swift_getObjectType();
            (*(code *)ppppplVar32[1])();
            _swift_unknownObjectRelease(pppppplVar28);
            pcVar22 = "HTTPShouldSetCookies";
            IVar10 = _objc_msgSend((ID)pppppplVar33,"HTTPShouldSetCookies");
            if ((int)IVar10 != 0) {
              pcVar22 = "HTTPCookieStorage";
              IVar10 = _objc_msgSend((ID)pppppplVar33,"HTTPCookieStorage");
              if (IVar10 != 0) {
                IVar13 = IVar10;
                local_1d0 = pppppplVar33;
                __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
                pcVar22 = "cookiesForURL:";
                uVar34 = _objc_msgSend(IVar10,"cookiesForURL:",IVar13);
                if (uVar34 != 0) {
                  pcVar22 = (char *)0x0;
                  local_1c8 = pppppplVar31;
                  FUN_10004003c(0,&DAT_100a83d30,&PTR__OBJC_CLASS___NSHTTPCookie_100a65a20);
                  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
                  if (uVar34 >> 0x3e == 0) {
                    uVar27 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
                    if (uVar27 == 0) {
LAB_1002cf0c8:
                      _swift_bridgeObjectRelease(uVar34);
                      pppppplVar31 = local_1c8;
                      goto LAB_1002cf0e4;
                    }
LAB_1002cee18:
                    local_110 = (long *******)PTR___swiftEmptyArrayStorage_100995ea0;
                    local_1f8 = IVar10;
                    FUN_1002c0aec(0,uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU),0);
                    if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002cfa0c);
                      (*pcVar4)();
                    }
                    IVar10 = 0;
                    local_1c0 = (long *******)(uVar34 & 0xc000000000000001);
                    do {
                      ppppppplVar29 = local_110;
                      if (local_1c0 == (long *******)0x0) {
                        IVar13 = *(ID *)(uVar34 + IVar10 * 8 + 0x20);
                      }
                      else {
                        IVar13 = IVar10;
                        FUN_100169c28(IVar10,uVar34,&PTR__OBJC_CLASS___NSHTTPCookie_100a65a20,
                                      &DAT_100a83d30);
                      }
                      pcVar22 = "name";
                      pppppplVar28 = (long ******)_objc_msgSend(IVar13,"name");
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                      local_e0 = (long *******)pppppplVar28;
                      local_d8 = (long *******)pcVar22;
                      __sSS6appendyySSF(0x3d,0xe100000000000000);
                      pcVar22 = "value";
                      IVar13 = _objc_msgSend(IVar13,"value");
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                (IVar13);
                      __sSS6appendyySSF(IVar13,pcVar22);
                      _swift_bridgeObjectRelease(pcVar22);
                      ppppppplVar18 = local_d8;
                      ppppppplVar20 = local_e0;
                      pppppplVar28 = ppppppplVar29[2];
                      local_110 = ppppppplVar29;
                      if ((long ******)((ulong)ppppppplVar29[3] >> 1) <= pppppplVar28) {
                        FUN_1002c0aec((long ******)0x1 < ppppppplVar29[3],
                                      (long ******)((long)pppppplVar28 + 1U),1);
                      }
                      ppppppplVar29 = local_110;
                      IVar10 = IVar10 + 1;
                      local_110[2] = (long ******)((long)pppppplVar28 + 1U);
                      local_110[(long)pppppplVar28 * 2 + 4] = (long ******)ppppppplVar20;
                      local_110[(long)pppppplVar28 * 2 + 5] = (long ******)ppppppplVar18;
                    } while (uVar27 != IVar10);
                    _swift_bridgeObjectRelease(uVar34);
                  }
                  else {
                    uVar27 = uVar34 & 0xffffffffffffff8;
                    if ((long)uVar34 < 0) {
                      uVar27 = uVar34;
                    }
                    uVar16 = uVar27;
                    __ss18_CocoaArrayWrapperV8endIndexSivg();
                    if (uVar16 == 0) goto LAB_1002cf0c8;
                    __ss18_CocoaArrayWrapperV8endIndexSivg();
                    if (uVar27 != 0) goto LAB_1002cee18;
                    local_1f8 = IVar10;
                    _swift_bridgeObjectRelease(uVar34);
                    ppppppplVar29 = (long *******)PTR___swiftEmptyArrayStorage_100995ea0;
                  }
                  puVar12 = &DAT_100a82770;
                  local_e0 = ppppppplVar29;
                  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
                  puVar15 = &DAT_100a82778;
                  FUN_10003f840(&DAT_100a82778,&DAT_100a82770,&DAT_1008186c0,
                                PTR___sSayxGSKsMc_100995888);
                  uVar11 = 0x3b;
                  uVar23 = 0xe100000000000000;
                  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF
                            (0x3b,0xe100000000000000,puVar12,puVar15);
                  _swift_bridgeObjectRelease(ppppppplVar29);
                  local_e0 = (long *******)0x2220622d;
                  local_d8 = (long *******)0xe400000000000000;
                  __sSS6appendyySSF(uVar11,uVar23);
                  _swift_bridgeObjectRelease(uVar23);
                  pcVar22 = (char *)0xe100000000000000;
                  __sSS6appendyySSF(0x22);
                  ppppppplVar18 = local_d8;
                  ppppppplVar20 = local_e0;
                  pppppplVar31 = local_1c8;
                  ppppplVar32 = local_1e8[2];
                  ppppppplVar29 = (long *******)((long)ppppplVar32 + 1);
                  pppppplVar28 = local_1e8;
                  if ((long *****)((ulong)local_1e8[3] >> 1) <= ppppplVar32) {
                    pppppplVar28 = (long ******)(ulong)((long *****)0x1 < local_1e8[3]);
                    pcVar22 = (char *)ppppppplVar29;
                    FUN_1002968f4(pppppplVar28,ppppppplVar29,1);
                  }
                  pppppplVar28[2] = (long *****)ppppppplVar29;
                  pppppplVar28[(long)ppppplVar32 * 2 + 4] = (long *****)ppppppplVar20;
                  pppppplVar28[(long)ppppplVar32 * 2 + 5] = (long *****)ppppppplVar18;
                  local_1e8 = pppppplVar28;
                }
              }
            }
          }
LAB_1002cf0e4:
          local_a0 = (long *******)PTR___swiftEmptyArrayStorage_100995ea0;
          ppppppplVar29 = (long *******)pppppplVar31;
          _swift_unknownObjectWeakLoadStrong();
          if (ppppppplVar29 != (long *******)0x0) {
            pcVar22 = (char *)pppppplVar31[1];
            _swift_getObjectType();
            (*(code *)*(long *******)((long)pcVar22 + 8))();
            _swift_unknownObjectRelease();
            FUN_1002bf3f0();
            ppppplVar32 = (long *****)ppppppplVar29[2];
            local_1c0 = ppppppplVar29;
            if (ppppplVar32 != (long *****)0x0) {
              pppppplVar28 = (long ******)(ppppppplVar29 + 7);
              do {
                pppppplVar31 = (long ******)pppppplVar28[-3];
                ppppppplVar29 = (long *******)pppppplVar28[-2];
                if (pppppplVar31 != (long ******)0x65696b6f6f43 ||
                    ppppppplVar29 != (long *******)0xe600000000000000) {
                  pppppplVar33 = (long ******)pppppplVar28[-1];
                  pppppplVar9 = (long ******)*pppppplVar28;
                  pppppplVar17 = pppppplVar31;
                  pcVar22 = (char *)ppppppplVar29;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (pppppplVar31,ppppppplVar29,0x65696b6f6f43,0xe600000000000000,0);
                  ppppppplVar20 = local_a0;
                  if (((ulong)pppppplVar17 & 1) == 0) {
                    _swift_bridgeObjectRetain(ppppppplVar29);
                    _swift_bridgeObjectRetain(pppppplVar9);
                    pppppplVar17 = pppppplVar31;
                    pcVar22 = (char *)ppppppplVar29;
                    FUN_1002bbc2c(pppppplVar31,ppppppplVar29,ppppppplVar20);
                    if (((ulong)pcVar22 & 1) == 0) {
                      puVar12 = &DAT_100a833e8;
                      FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
                      _swift_initStackObject();
                      *(undefined8 *)(puVar12 + 0x18) = uStack_198;
                      *(long *******)(puVar12 + 0x10) = local_1a0;
                      *(long *******)(puVar12 + 0x20) = pppppplVar31;
                      *(long ********)(puVar12 + 0x28) = ppppppplVar29;
                      *(long *******)(puVar12 + 0x30) = pppppplVar33;
                      *(long *******)(puVar12 + 0x38) = pppppplVar9;
                      if (SCARRY8((long)pppppplVar17,1)) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002cf9d0);
                        (*pcVar4)();
                      }
                      FUN_1002c0f64(pppppplVar17,(long)pppppplVar17 + 1,puVar12);
                      _swift_setDeallocating(puVar12);
                      pcVar22 = *(char **)(puVar12 + 0x10);
                      _swift_arrayDestroy(puVar12 + 0x20,pcVar22,&DAT_1009ad080);
                    }
                    else {
                      _swift_bridgeObjectRetain(ppppppplVar29);
                      _swift_bridgeObjectRetain(pppppplVar9);
                      ppppppplVar18 = ppppppplVar20;
                      _swift_isUniquelyReferenced_nonNull_native();
                      ppppppplVar19 = ppppppplVar20;
                      if (((ulong)ppppppplVar18 & 1) == 0) {
                        pcVar22 = (char *)((long)ppppppplVar20[2] + 1);
                        ppppppplVar19 = (long *******)0x0;
                        FUN_1002966ec(0,pcVar22,1,ppppppplVar20);
                      }
                      pppppplVar17 = ppppppplVar19[2];
                      ppppppplVar20 = (long *******)((long)pppppplVar17 + 1);
                      ppppppplVar18 = ppppppplVar19;
                      if ((long ******)((ulong)ppppppplVar19[3] >> 1) <= pppppplVar17) {
                        ppppppplVar18 = (long *******)(ulong)((long ******)0x1 < ppppppplVar19[3]);
                        pcVar22 = (char *)ppppppplVar20;
                        FUN_1002966ec(ppppppplVar18,ppppppplVar20,1,ppppppplVar19);
                      }
                      ppppppplVar18[2] = (long ******)ppppppplVar20;
                      ppppppplVar18[(long)pppppplVar17 * 4 + 4] = pppppplVar31;
                      ppppppplVar18[(long)pppppplVar17 * 4 + 5] = (long ******)ppppppplVar29;
                      ppppppplVar18[(long)pppppplVar17 * 4 + 6] = pppppplVar33;
                      ppppppplVar18[(long)pppppplVar17 * 4 + 7] = pppppplVar9;
                      _swift_bridgeObjectRelease(pppppplVar9);
                      _swift_bridgeObjectRelease(ppppppplVar29);
                      local_a0 = ppppppplVar18;
                    }
                  }
                }
                pppppplVar28 = pppppplVar28 + 4;
                ppppplVar32 = (long *****)((long)ppppplVar32 + -1);
              } while (ppppplVar32 != (long *****)0x0);
            }
            ppppppplVar29 = local_1c0;
            _swift_bridgeObjectRelease();
          }
          __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
          if (ppppppplVar29 == (long *******)0x0) {
            local_1c8 = (long ******)0x0;
            local_1c0 = (long *******)PTR___swiftEmptyArrayStorage_100995ea0;
          }
          else {
            local_e0 = (long *******)PTR___swiftEmptyArrayStorage_100995ea0;
            pcVar22 = (char *)&local_e0;
            FUN_1002bb634();
            local_1c8 = (long ******)0x0;
            _swift_bridgeObjectRelease(ppppppplVar29);
            local_1c0 = local_e0;
          }
          ppppplVar32 = (long *****)local_1c0[2];
          if (ppppplVar32 != (long *****)0x0) {
            pppppplVar28 = (long ******)(local_1c0 + 7);
            do {
              pppppplVar31 = (long ******)pppppplVar28[-3];
              ppppppplVar29 = (long *******)pppppplVar28[-2];
              if (pppppplVar31 != (long ******)0x65696b6f6f43 ||
                  ppppppplVar29 != (long *******)0xe600000000000000) {
                pppppplVar33 = (long ******)pppppplVar28[-1];
                pppppplVar9 = (long ******)*pppppplVar28;
                pppppplVar17 = pppppplVar31;
                pcVar22 = (char *)ppppppplVar29;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (pppppplVar31,ppppppplVar29,0x65696b6f6f43,0xe600000000000000,0);
                ppppppplVar20 = local_a0;
                if (((ulong)pppppplVar17 & 1) == 0) {
                  _swift_bridgeObjectRetain(ppppppplVar29);
                  _swift_bridgeObjectRetain(pppppplVar9);
                  pppppplVar17 = pppppplVar31;
                  pcVar22 = (char *)ppppppplVar29;
                  FUN_1002bbc2c(pppppplVar31,ppppppplVar29,ppppppplVar20);
                  if (((ulong)pcVar22 & 1) == 0) {
                    puVar12 = &DAT_100a833e8;
                    FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
                    _swift_initStackObject();
                    *(undefined8 *)(puVar12 + 0x18) = uStack_198;
                    *(long *******)(puVar12 + 0x10) = local_1a0;
                    *(long *******)(puVar12 + 0x20) = pppppplVar31;
                    *(long ********)(puVar12 + 0x28) = ppppppplVar29;
                    *(long *******)(puVar12 + 0x30) = pppppplVar33;
                    *(long *******)(puVar12 + 0x38) = pppppplVar9;
                    if (SCARRY8((long)pppppplVar17,1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002cf9cc);
                      (*pcVar4)();
                    }
                    FUN_1002c0f64(pppppplVar17,(long)pppppplVar17 + 1,puVar12);
                    _swift_setDeallocating(puVar12);
                    pcVar22 = *(char **)(puVar12 + 0x10);
                    _swift_arrayDestroy(puVar12 + 0x20,pcVar22,&DAT_1009ad080);
                  }
                  else {
                    _swift_bridgeObjectRetain(ppppppplVar29);
                    _swift_bridgeObjectRetain(pppppplVar9);
                    ppppppplVar18 = ppppppplVar20;
                    _swift_isUniquelyReferenced_nonNull_native();
                    ppppppplVar19 = ppppppplVar20;
                    if (((ulong)ppppppplVar18 & 1) == 0) {
                      pcVar22 = (char *)((long)ppppppplVar20[2] + 1);
                      ppppppplVar19 = (long *******)0x0;
                      FUN_1002966ec(0,pcVar22,1,ppppppplVar20);
                    }
                    pppppplVar17 = ppppppplVar19[2];
                    ppppppplVar20 = (long *******)((long)pppppplVar17 + 1);
                    ppppppplVar18 = ppppppplVar19;
                    if ((long ******)((ulong)ppppppplVar19[3] >> 1) <= pppppplVar17) {
                      ppppppplVar18 = (long *******)(ulong)((long ******)0x1 < ppppppplVar19[3]);
                      pcVar22 = (char *)ppppppplVar20;
                      FUN_1002966ec(ppppppplVar18,ppppppplVar20,1,ppppppplVar19);
                    }
                    ppppppplVar18[2] = (long ******)ppppppplVar20;
                    ppppppplVar18[(long)pppppplVar17 * 4 + 4] = pppppplVar31;
                    ppppppplVar18[(long)pppppplVar17 * 4 + 5] = (long ******)ppppppplVar29;
                    ppppppplVar18[(long)pppppplVar17 * 4 + 6] = pppppplVar33;
                    ppppppplVar18[(long)pppppplVar17 * 4 + 7] = pppppplVar9;
                    _swift_bridgeObjectRelease(pppppplVar9);
                    _swift_bridgeObjectRelease(ppppppplVar29);
                    local_a0 = ppppppplVar18;
                  }
                }
              }
              pppppplVar28 = pppppplVar28 + 4;
              ppppplVar32 = (long *****)((long)ppppplVar32 + -1);
            } while (ppppplVar32 != (long *****)0x0);
          }
          ppppppplVar20 = local_1c0;
          _swift_bridgeObjectRelease();
          ppppppplVar29 = local_a0;
          pppppplVar28 = local_a0[2];
          local_1c0 = local_a0;
          pppppplVar31 = local_1e8;
          if (pppppplVar28 != (long ******)0x0) {
            FUN_1002c6438();
            ppppppplVar29 = ppppppplVar29 + 7;
            pppppplVar33 = local_1e8;
            local_1a0 = (long ******)ppppppplVar20;
            do {
              pppppplVar31 = ppppppplVar29[-3];
              pppppplVar9 = ppppppplVar29[-2];
              local_e0 = (long *******)ppppppplVar29[-1];
              pppppplVar17 = *ppppppplVar29;
              local_110 = (long *******)0x22;
              ppppppplStack_108 = (long *******)0xe100000000000000;
              local_b0 = (long *******)0x225c;
              local_a8 = (long *******)0xe200000000000000;
              local_d8 = (long *******)pppppplVar17;
              _swift_bridgeObjectRetain(pppppplVar17);
              _swift_bridgeObjectRetain(pppppplVar9);
              pppppplVar3 = local_1a0;
              *(long *******)(lVar7 + -0x10) = local_1a0;
              *(long *******)(lVar7 + -8) = pppppplVar3;
              ppppppplVar20 = (long *******)&local_110;
              ppppppplVar18 = (long *******)&local_b0;
              *(long *******)(lVar7 + -0x18) = pppppplVar3;
              *(undefined **)(lVar7 + -0x20) = PTR___sSSN_1009957f8;
              __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                        (ppppppplVar20,ppppppplVar18,0,0,0,1,PTR___sSSN_1009957f8,
                         PTR___sSSN_1009957f8);
              local_e0 = (long *******)0x2220482d;
              local_d8 = (long *******)0xe400000000000000;
              _swift_bridgeObjectRetain(pppppplVar9);
              __sSS6appendyySSF(pppppplVar31,pppppplVar9);
              _swift_bridgeObjectRelease(pppppplVar17);
              _swift_bridgeObjectRelease_n(pppppplVar9,2);
              __sSS6appendyySSF(0x203a,0xe200000000000000);
              __sSS6appendyySSF(ppppppplVar20,ppppppplVar18);
              _swift_bridgeObjectRelease(ppppppplVar18);
              pcVar22 = (char *)0xe100000000000000;
              __sSS6appendyySSF(0x22);
              ppppppplVar19 = local_d8;
              ppppppplVar18 = local_e0;
              ppppplVar32 = pppppplVar33[2];
              ppppppplVar20 = (long *******)((long)ppppplVar32 + 1);
              pppppplVar31 = pppppplVar33;
              if ((long *****)((ulong)pppppplVar33[3] >> 1) <= ppppplVar32) {
                pppppplVar31 = (long ******)(ulong)((long *****)0x1 < pppppplVar33[3]);
                pcVar22 = (char *)ppppppplVar20;
                FUN_1002968f4(pppppplVar31,ppppppplVar20,1,pppppplVar33);
              }
              pppppplVar31[2] = (long *****)ppppppplVar20;
              pppppplVar31[(long)ppppplVar32 * 2 + 4] = (long *****)ppppppplVar18;
              pppppplVar31[(long)ppppplVar32 * 2 + 5] = (long *****)ppppppplVar19;
              ppppppplVar29 = ppppppplVar29 + 4;
              pppppplVar28 = (long ******)((long)pppppplVar28 + -1);
              pppppplVar33 = pppppplVar31;
            } while (pppppplVar28 != (long ******)0x0);
          }
          ppppppplVar29 = local_1c0;
          local_1e8 = pppppplVar31;
          _swift_bridgeObjectRelease();
          __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
          lVar26 = local_1b0;
          lVar6 = local_1b8;
          pppppplVar28 = local_1e8;
          if ((ulong)pcVar22 >> 0x3c < 0xf) {
            FUN_100008184();
            ppppppplVar20 = ppppppplVar29;
            ppppppplVar18 = (long *******)pcVar22;
            FUN_1002d3c9c();
            if (ppppppplVar18 == (long *******)0x0) {
              local_b0 = ppppppplVar29;
              local_a8 = (long *******)pcVar22;
              FUN_100008184(ppppppplVar29,pcVar22);
              puVar12 = &DAT_100a82788;
              FUN_100004bb4(&DAT_100a82788,&DAT_100816f50);
              ppppppplVar20 = (long *******)&local_110;
              _swift_dynamicCast(ppppppplVar20,&local_b0,PTR___s10Foundation4DataVN_1009961e8,
                                 puVar12,6);
              if (((ulong)ppppppplVar20 & 1) == 0) {
                local_f0 = 0;
                ppppppplStack_108 = (long *******)0x0;
                local_110 = (long *******)0x0;
                uStack_f8 = 0;
                uStack_100 = 0;
                FUN_100040bb4(&local_110,&DAT_100a82790,&DAT_1008178d0);
LAB_1002cf76c:
                ppppppplVar20 = ppppppplVar29;
                ppppppplVar18 = (long *******)pcVar22;
                FUN_1002d3858();
                goto LAB_1002cf778;
              }
              FUN_1000a0074(&local_110,&local_e0);
              uVar11 = uStack_c0;
              uVar34 = local_c8;
              FUN_10003f030(&local_e0,local_c8);
              __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(uVar34,uVar11);
              if ((uVar34 & 1) == 0) {
                FUN_10003f094(&local_e0);
                goto LAB_1002cf76c;
              }
              FUN_100006cc8(ppppppplVar29,pcVar22);
              FUN_10003f030(&local_e0,local_c8);
              __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
                        (&local_110,FUN_1002d38c0,0,PTR___sSSN_1009957f8,local_c8,uStack_c0);
              ppppppplVar18 = ppppppplStack_108;
              ppppppplVar20 = local_110;
              ppppppplVar19 = (long *******)&local_e0;
              FUN_10003f094();
            }
            else {
LAB_1002cf778:
              ppppppplVar19 = ppppppplVar29;
              FUN_100006cc8(ppppppplVar29,pcVar22);
            }
            local_110 = (long *******)0x225c;
            ppppppplStack_108 = (long *******)0xe200000000000000;
            local_b0 = (long *******)0x225c5c;
            local_a8 = (long *******)0xe300000000000000;
            local_e0 = ppppppplVar20;
            local_d8 = ppppppplVar18;
            FUN_1002c6438();
            puVar12 = PTR___sSSN_1009957f8;
            *(long ********)(lVar7 + -0x10) = ppppppplVar19;
            *(long ********)(lVar7 + -8) = ppppppplVar19;
            *(undefined **)(lVar7 + -0x20) = PTR___sSSN_1009957f8;
            *(long ********)(lVar7 + -0x18) = ppppppplVar19;
            ppppppplVar20 = (long *******)&local_110;
            ppppppplVar25 = (long *******)&local_b0;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (ppppppplVar20,ppppppplVar25,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8
                      );
            _swift_bridgeObjectRelease(ppppppplVar18);
            local_110 = (long *******)0x22;
            ppppppplStack_108 = (long *******)0xe100000000000000;
            local_b0 = (long *******)0x225c;
            local_a8 = (long *******)0xe200000000000000;
            local_e0 = ppppppplVar20;
            local_d8 = ppppppplVar25;
            *(long ********)(lVar7 + -0x10) = ppppppplVar19;
            *(long ********)(lVar7 + -8) = ppppppplVar19;
            ppppppplVar20 = (long *******)&local_110;
            ppppppplVar18 = (long *******)&local_b0;
            *(undefined **)(lVar7 + -0x20) = puVar12;
            *(long ********)(lVar7 + -0x18) = ppppppplVar19;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (ppppppplVar20,ppppppplVar18,0,0,0,1,puVar12,puVar12);
            _swift_bridgeObjectRelease(ppppppplVar25);
            local_e0 = (long *******)0x2220642d;
            local_d8 = (long *******)0xe400000000000000;
            __sSS6appendyySSF(ppppppplVar20,ppppppplVar18);
            _swift_bridgeObjectRelease(ppppppplVar18);
            __sSS6appendyySSF(0x22,0xe100000000000000);
            ppppppplVar18 = local_d8;
            ppppppplVar20 = local_e0;
            ppppplVar32 = local_1e8[2];
            pppppplVar28 = local_1e8;
            if ((long *****)((ulong)local_1e8[3] >> 1) <= ppppplVar32) {
              pppppplVar28 = (long ******)(ulong)((long *****)0x1 < local_1e8[3]);
              FUN_1002968f4(pppppplVar28,(long *****)((long)ppppplVar32 + 1U),1);
            }
            lVar26 = local_1b0;
            lVar6 = local_1b8;
            pppppplVar28[2] = (long *****)((long)ppppplVar32 + 1U);
            pppppplVar28[(long)ppppplVar32 * 2 + 4] = (long *****)ppppppplVar20;
            pppppplVar28[(long)ppppplVar32 * 2 + 5] = (long *****)ppppppplVar18;
            FUN_100006cc8(ppppppplVar29,pcVar22);
          }
          local_e0 = (long *******)0x22;
          local_d8 = (long *******)0xe100000000000000;
          __s10Foundation3URLV14absoluteStringSSvg();
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(pcVar22);
          __sSS6appendyySSF(0x22,0xe100000000000000);
          ppppppplVar20 = local_d8;
          ppppppplVar29 = local_e0;
          lVar7 = local_1e0;
          ppppplVar32 = pppppplVar28[2];
          if ((long *****)((ulong)pppppplVar28[3] >> 1) <= ppppplVar32) {
            pppppplVar28 = (long ******)(ulong)((long *****)0x1 < pppppplVar28[3]);
            FUN_1002968f4(pppppplVar28,(long *****)((long)ppppplVar32 + 1U),1);
          }
          pppppplVar28[2] = (long *****)((long)ppppplVar32 + 1U);
          pppppplVar28[(long)ppppplVar32 * 2 + 4] = (long *****)ppppppplVar29;
          pppppplVar28[(long)ppppplVar32 * 2 + 5] = (long *****)ppppppplVar20;
          puVar12 = &DAT_100a82770;
          local_e0 = (long *******)pppppplVar28;
          FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
          puVar15 = &DAT_100a82778;
          FUN_10003f840(&DAT_100a82778,&DAT_100a82770,&DAT_1008186c0,PTR___sSayxGSKsMc_100995888);
          uVar11 = 0x90a5c20;
          uVar23 = 0xe400000000000000;
          __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF
                    (0x90a5c20,0xe400000000000000,puVar12,puVar15);
          _swift_bridgeObjectRelease(pppppplVar28);
          (**(code **)(local_1a8 + 8))(lVar6,lVar26);
          (**(code **)(lVar7 + 8))(local_1d8,local_1f0);
          goto LAB_1002ce8a0;
        }
        _swift_bridgeObjectRelease(pppppplVar28);
        (**(code **)(local_1a8 + 8))(local_1b8,lVar1);
        pcVar4 = *(code **)(local_1e0 + 8);
        lVar6 = local_1f0;
      }
      (*pcVar4)(lVar7,lVar6);
    }
  }
  uVar23 = 0x80000001008a9d30;
  uVar11 = 0xd000000000000023;
LAB_1002ce8a0:
  auVar35._8_8_ = uVar23;
  auVar35._0_8_ = uVar11;
  return auVar35;
}

