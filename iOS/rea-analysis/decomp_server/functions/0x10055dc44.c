// rea decompile_all
// name: FUN_10055dc44
// address: 0x10055dc44
// body: available
// range: 0x10055dc44-0x10055e367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_10055dc44(byte *******param_1,byte *******param_2,byte *******param_3,uint param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *****pppppbVar8;
  int *piVar9;
  long unaff_x20;
  byte ******ppppppbVar10;
  long unaff_x21;
  byte *******pppppppbVar11;
  byte *******unaff_x27;
  byte *******pppppppbVar12;
  byte ******appppppbStack_c0 [2];
  byte *******local_b0;
  uint local_9c;
  long local_98;
  byte *******local_90;
  byte *******local_88;
  byte *******pppppppbStack_80;
  long local_70;
  long local_68;
  
  pppppppbVar11 = *(byte ********)(unaff_x20 + 0x30);
  pppppppbVar5 = param_1;
  pppppppbVar12 = *(byte ********)(unaff_x20 + 0x28);
  local_9c = param_4;
  local_90 = param_2;
LAB_10055dc98:
  do {
    if ((pppppppbVar12 == pppppppbVar11) || (bVar1 = *(byte *)pppppppbVar12, 0x23 < bVar1)) {
LAB_10055dcf0:
      if (pppppppbVar12 == pppppppbVar11) {
        if ((local_9c >> 8 & 1) != 0) {
          return (byte *******)0x0;
        }
LAB_10055e314:
        FUN_1004f9b10();
        _swift_allocError(&DAT_1009d1c98,pppppppbVar5,0,0);
        *(byte *)pppppppbVar5 = 0;
        goto LAB_10055e338;
      }
      bVar1 = *(byte *)pppppppbVar12;
      pppppppbVar6 = pppppppbVar12;
      if (0xe5 < (byte)((bVar1 & 0xdf) + 0xa5)) {
        do {
          bVar1 = *(byte *)pppppppbVar6;
          if (((bVar1 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
             (unaff_x27 = pppppppbVar6, bVar1 != 0x5f && 9 < bVar1 - 0x30)) break;
          pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
          *(byte ********)(unaff_x20 + 0x28) = pppppppbVar6;
          unaff_x27 = pppppppbVar6;
        } while (pppppppbVar6 != pppppppbVar11);
        do {
          if ((pppppppbVar6 == pppppppbVar11) || (bVar1 = *(byte *)pppppppbVar6, 0x23 < bVar1))
          goto LAB_10055ddfc;
          if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar1 != 0x23) goto LAB_10055ddfc;
            pppppppbVar7 = (byte *******)((long)pppppppbVar6 + 1);
            while (pppppppbVar6 = pppppppbVar11, pppppppbVar7 != pppppppbVar11) {
              pppppppbVar6 = (byte *******)((long)pppppppbVar7 + 1);
              bVar1 = *(byte *)pppppppbVar7;
              if ((bVar1 == 10) || (pppppppbVar7 = pppppppbVar6, bVar1 == 0xd)) break;
            }
          }
          else {
            pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
          }
          *(byte ********)(unaff_x20 + 0x28) = pppppppbVar6;
        } while( true );
      }
      if (bVar1 == 0x5b) {
        FUN_100561d78();
        if (unaff_x21 != 0) {
          return unaff_x27;
        }
        pppppppbVar12 = (byte *******)&local_88;
        FUN_1004f9894();
        lVar3 = local_68;
        lVar2 = local_70;
        if (local_70 == 0) {
          _swift_bridgeObjectRelease(param_2);
          pppppppbVar5 = (byte *******)&local_88;
          FUN_1005187f8();
          bVar1 = *(byte *)(unaff_x20 + 0x49);
          unaff_x27 = (byte *******)0x0;
          param_2 = pppppppbVar12;
        }
        else {
          local_98 = unaff_x21;
          FUN_10003f030(&local_88,local_70);
          unaff_x27 = local_90;
          pppppppbVar12 = param_3;
          (**(code **)(lVar3 + 0x10))(local_90,param_3,pppppppbVar5,param_2,lVar2,lVar3);
          pppppppbVar6 = pppppppbVar12;
          _swift_bridgeObjectRelease(param_2);
          pppppppbVar5 = (byte *******)&local_88;
          FUN_10003f094();
          if (((ulong)pppppppbVar12 & 1) == 0) {
            return unaff_x27;
          }
          bVar1 = *(byte *)(unaff_x20 + 0x49);
          param_2 = pppppppbVar6;
          unaff_x21 = local_98;
        }
        if ((bVar1 & 1) != 0) goto LAB_10055e0dc;
      }
      else {
        if ((bVar1 - 0x3a & 0xff) < 0xf7) {
          pppppppbVar5 = (byte *******)(ulong)local_9c;
          if (((local_9c >> 8 & 1) == 0) && ((uint)bVar1 == (local_9c & 0xff))) {
            FUN_10055eeb0();
            return (byte *******)0x0;
          }
          goto LAB_10055e314;
        }
        unaff_x27 = (byte *******)((ulong)bVar1 - 0x30);
        pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 1);
        pppppppbVar7 = pppppppbVar11;
        if ((pppppppbVar6 != pppppppbVar11) &&
           (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
          unaff_x27 = (byte *******)
                      ((ulong)*(byte *)pppppppbVar6 + (long)(int)unaff_x27 * 10 + -0x30);
          pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 2);
          pppppppbVar7 = pppppppbVar11;
          if ((pppppppbVar6 != pppppppbVar11) &&
             (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
            unaff_x27 = (byte *******)
                        ((ulong)*(byte *)pppppppbVar6 + (long)(int)unaff_x27 * 10 + -0x30);
            pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 3);
            pppppppbVar7 = pppppppbVar11;
            if ((pppppppbVar6 != pppppppbVar11) &&
               (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
              unaff_x27 = (byte *******)
                          ((ulong)*(byte *)pppppppbVar6 + (long)(int)unaff_x27 * 10 + -0x30);
              pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 4);
              pppppppbVar7 = pppppppbVar11;
              if ((pppppppbVar6 != pppppppbVar11) &&
                 (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
                unaff_x27 = (byte *******)
                            ((ulong)*(byte *)pppppppbVar6 + (long)(int)unaff_x27 * 10 + -0x30);
                pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 5);
                pppppppbVar7 = pppppppbVar11;
                if ((pppppppbVar6 != pppppppbVar11) &&
                   (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
                  unaff_x27 = (byte *******)
                              ((ulong)*(byte *)pppppppbVar6 + (long)unaff_x27 * 10 + -0x30);
                  pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 6);
                  pppppppbVar7 = pppppppbVar11;
                  if ((pppppppbVar6 != pppppppbVar11) &&
                     (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
                    unaff_x27 = (byte *******)
                                ((ulong)*(byte *)pppppppbVar6 + (long)unaff_x27 * 10 + -0x30);
                    pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 7);
                    pppppppbVar7 = pppppppbVar11;
                    if ((pppppppbVar6 != pppppppbVar11) &&
                       (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
                      unaff_x27 = (byte *******)
                                  ((ulong)*(byte *)pppppppbVar6 + (long)unaff_x27 * 10 + -0x30);
                      pppppppbVar6 = pppppppbVar12 + 1;
                      pppppppbVar7 = pppppppbVar11;
                      if ((pppppppbVar6 != pppppppbVar11) &&
                         (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a)) {
                        unaff_x27 = (byte *******)
                                    ((ulong)*(byte *)pppppppbVar6 + (long)unaff_x27 * 10 + -0x30);
                        pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 9);
                        pppppppbVar7 = pppppppbVar11;
                        if ((pppppppbVar6 != pppppppbVar11) &&
                           (pppppppbVar7 = pppppppbVar6, 0xfffffff5 < *(byte *)pppppppbVar6 - 0x3a))
                        {
                          *(byte **)(unaff_x20 + 0x28) = (byte *)((long)pppppppbVar12 + 10);
                          goto LAB_10055e314;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(byte ********)(unaff_x20 + 0x28) = pppppppbVar7;
        FUN_100560bb8();
        if ((param_1[1][2] != (byte *****)0x0) &&
           (pppppppbVar5 = unaff_x27, FUN_1003618e4(), ((ulong)param_2 & 1) != 0)) {
          return unaff_x27;
        }
        if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) goto LAB_10055e0dc;
        pppppbVar8 = param_1[5][2];
        if (pppppbVar8 != (byte *****)0x0) {
          piVar9 = (int *)((long)param_1[5] + 0x24);
          while ((int)unaff_x27 < piVar9[-1] || *piVar9 <= (int)unaff_x27) {
            piVar9 = piVar9 + 2;
            pppppbVar8 = (byte *****)((long)pppppbVar8 + -1);
            if (pppppbVar8 == (byte *****)0x0) goto LAB_10055e298;
          }
          goto LAB_10055e0dc;
        }
      }
      goto LAB_10055e298;
    }
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x23) goto LAB_10055dcf0;
      pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 1);
      do {
        if (pppppppbVar6 == pppppppbVar11) {
          *(byte ********)(unaff_x20 + 0x28) = pppppppbVar11;
          pppppppbVar12 = pppppppbVar11;
          goto LAB_10055dc98;
        }
        pppppppbVar12 = (byte *******)((long)pppppppbVar6 + 1);
        bVar1 = *(byte *)pppppppbVar6;
      } while ((bVar1 != 10) && (pppppppbVar6 = pppppppbVar12, bVar1 != 0xd));
    }
    else {
      pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
    }
    *(byte ********)(unaff_x20 + 0x28) = pppppppbVar12;
  } while( true );
LAB_10055e150:
  if ((pppppppbVar12 != pppppppbVar11) && (*(byte *)pppppppbVar12 == 0x3a)) {
    do {
      pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
LAB_10055e168:
      *(byte ********)(unaff_x20 + 0x28) = pppppppbVar12;
      if ((pppppppbVar12 == pppppppbVar11) || (bVar1 = *(byte *)pppppppbVar12, 0x23 < bVar1)) {
LAB_10055e1c8:
        if (pppppppbVar12 == pppppppbVar11) goto LAB_10055e314;
        if ((*(byte *)pppppppbVar12 == 0x7b) || (*(byte *)pppppppbVar12 == 0x3c))
        goto LAB_10055e1e4;
        pppppppbVar5 = (byte *******)0x1;
        FUN_100561e84();
        goto joined_r0x00010055e290;
      }
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar1 != 0x23) goto LAB_10055e1c8;
    pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 1);
    while (pppppppbVar12 = pppppppbVar11, pppppppbVar6 != pppppppbVar11) {
      pppppppbVar12 = (byte *******)((long)pppppppbVar6 + 1);
      bVar1 = *(byte *)pppppppbVar6;
      if ((bVar1 == 10) || (pppppppbVar6 = pppppppbVar12, bVar1 == 0xd)) break;
    }
    goto LAB_10055e168;
  }
LAB_10055e1e4:
  FUN_100562160();
joined_r0x00010055e290:
  if (unaff_x21 != 0) {
    return unaff_x27;
  }
  pppppppbVar12 = *(byte ********)(unaff_x20 + 0x28);
  pppppppbVar11 = *(byte ********)(unaff_x20 + 0x30);
  if ((pppppppbVar12 != pppppppbVar11) &&
     ((*(byte *)pppppppbVar12 == 0x3b || (*(byte *)pppppppbVar12 == 0x2c)))) {
    do {
      pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
LAB_10055e21c:
      *(byte ********)(unaff_x20 + 0x28) = pppppppbVar12;
      if ((pppppppbVar12 == pppppppbVar11) || (bVar1 = *(byte *)pppppppbVar12, 0x23 < bVar1))
      goto LAB_10055dc98;
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar1 != 0x23) goto LAB_10055dc98;
    pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 1);
    while (pppppppbVar12 = pppppppbVar11, pppppppbVar6 != pppppppbVar11) {
      pppppppbVar12 = (byte *******)((long)pppppppbVar6 + 1);
      bVar1 = *(byte *)pppppppbVar6;
      if ((bVar1 == 10) || (pppppppbVar6 = pppppppbVar12, bVar1 == 0xd)) break;
    }
    goto LAB_10055e21c;
  }
  goto LAB_10055dc98;
LAB_10055ddfc:
  ppppppbVar10 = param_1[2];
  if ((ppppppbVar10[2] != (byte *****)0x0) &&
     (pppppppbVar5 = pppppppbVar12, param_2 = unaff_x27, FUN_100511c0c(), ((ulong)param_2 & 1) != 0)
     ) {
    return (byte *******)ppppppbVar10[7][(long)pppppppbVar5];
  }
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
LAB_10055e0dc:
    pppppppbVar12 = *(byte ********)(unaff_x20 + 0x28);
    do {
      if ((pppppppbVar12 == pppppppbVar11) || (bVar1 = *(byte *)pppppppbVar12, 0x23 < bVar1))
      goto LAB_10055e150;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x23) goto LAB_10055e150;
        pppppppbVar6 = (byte *******)((long)pppppppbVar12 + 1);
        do {
          if (pppppppbVar6 == pppppppbVar11) {
            *(byte ********)(unaff_x20 + 0x28) = pppppppbVar11;
            pppppppbVar12 = pppppppbVar11;
            goto LAB_10055e150;
          }
          pppppppbVar12 = (byte *******)((long)pppppppbVar6 + 1);
          bVar1 = *(byte *)pppppppbVar6;
        } while ((bVar1 != 10) && (pppppppbVar6 = pppppppbVar12, bVar1 != 0xd));
      }
      else {
        pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
      }
      *(byte ********)(unaff_x20 + 0x28) = pppppppbVar12;
    } while( true );
  }
  ppppppbVar10 = param_1[4];
  if (ppppppbVar10[2] != (byte *****)0x0) {
    pppppppbVar6 = (byte *******)((long)unaff_x27 - (long)pppppppbVar12);
    FUN_10054c680();
    pppppppbVar5 = pppppppbVar12;
    if (pppppppbVar6 != (byte *******)0x0) {
      param_2 = appppppbStack_c0;
      local_b0 = (byte *******)&local_88;
      uVar4 = 0;
      local_88 = pppppppbVar12;
      pppppppbStack_80 = pppppppbVar6;
      FUN_100152a38(FUN_10000d558,param_2,ppppppbVar10);
      pppppppbVar5 = pppppppbVar6;
      _swift_bridgeObjectRelease();
      unaff_x27 = pppppppbVar6;
      if ((uVar4 & 1) != 0) goto LAB_10055e0dc;
    }
  }
LAB_10055e298:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,pppppppbVar5,0,0);
  *(byte *)pppppppbVar5 = 7;
LAB_10055e338:
  _swift_willThrow();
  return unaff_x27;
}

