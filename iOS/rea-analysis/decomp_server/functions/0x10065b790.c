// rea decompile_all
// name: FUN_10065b790
// address: 0x10065b790
// body: available
// range: 0x10065b790-0x10065bdbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010065b920) */
/* WARNING: Removing unreachable block (ram,0x00010065bc14) */
/* WARNING: Removing unreachable block (ram,0x00010065bc18) */

undefined8
FUN_10065b790(undefined8 ******param_1,undefined8 ******param_2,undefined8 param_3,
             undefined8 ******param_4,undefined1 *param_5)

{
  undefined8 *****pppppuVar1;
  ushort uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  byte bVar11;
  undefined8 ******ppppppuVar12;
  ulong uVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *****pppppuVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 auStack_110 [8];
  undefined8 *****local_108;
  undefined8 *****local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined1 *local_e8;
  ulong local_e0;
  undefined8 *****local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined8 *****local_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *****local_a0;
  undefined8 *****local_98;
  undefined8 *****local_88;
  ulong uStack_80;
  byte local_71;
  byte local_70;
  
  puVar5 = auStack_110;
  local_e8 = param_5;
  if (param_5 + -0x24 < (undefined1 *)0xffffffffffffffde) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10065bd48);
    (*pcVar4)();
  }
  uVar17 = (ulong)param_1 >> 0xe;
  ppppppuVar7 = param_4;
  if (uVar17 == (ulong)param_2 >> 0xe) {
LAB_10065bc88:
    _swift_bridgeObjectRelease(ppppppuVar7);
    return 0;
  }
  ppppppuVar12 = param_2;
  FUN_10065e570();
  ppppppuVar9 = param_2;
  local_c0 = param_5;
  __sSs5index6beforeSS5IndexVAD_tF(param_2,param_1,param_2,param_3,param_4);
  puVar16 = (undefined1 *)0x1;
  ppppppuVar10 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100995ea0;
  ppppppuVar7 = param_2;
  local_108 = param_1;
  local_100 = param_2;
  local_f8 = param_3;
  local_f0 = uVar17;
  do {
    if (puVar16 == local_c0) {
      if ((ulong)param_2 >> 0xe < (ulong)ppppppuVar9 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065bd30);
        (*pcVar4)();
      }
      local_e0 = (ulong)ppppppuVar9 >> 0xe;
      local_d8 = ppppppuVar9;
      __sSsySsSnySS5IndexVGcig();
      if (((ulong)ppppppuVar9 ^ (ulong)param_2) >> 0xe == 0) {
        _swift_bridgeObjectRelease(ppppppuVar10);
        _swift_bridgeObjectRelease(param_4);
      }
      else {
        *(undefined1 **)(puVar5 + -0x10) = local_e8;
        local_b0 = ppppppuVar9;
        pppppuStack_a8 = param_2;
        local_a0 = param_1;
        local_98 = ppppppuVar7;
        *(undefined8 *******)(puVar5 + -0x40) = &local_b0;
        *(code **)(puVar5 + -0x38) = FUN_10065ea08;
        *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x20;
        if (((ulong)ppppppuVar7 >> 0x3c & 1) == 0) {
          local_d0 = puVar5 + -0x20;
          puStack_c8 = puVar5;
          if (((ulong)ppppppuVar7 >> 0x3d & 1) == 0) {
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              ppppppuVar8 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,ppppppuVar7);
              ppppppuVar14 = *(undefined8 *******)(puVar5 + -0x40);
            }
            else {
              ppppppuVar8 = (undefined8 ******)(((ulong)ppppppuVar7 & 0xfffffffffffffff) + 0x20);
              ppppppuVar14 = &local_b0;
            }
            bVar11 = (byte)*ppppppuVar14;
            FUN_10000d604();
          }
          else {
            uStack_80 = (ulong)ppppppuVar7 & 0xffffffffffffff;
            ppppppuVar8 = &local_88;
            ppppppuVar14 = (undefined8 ******)local_b0;
            local_88 = param_1;
            FUN_10000d604(ppppppuVar8,local_b0,pppppuStack_a8,local_a0,local_98,FUN_10065ea08);
            bVar11 = (byte)ppppppuVar14;
          }
          local_70 = bVar11 & 1;
          puVar5 = puStack_c8;
        }
        else {
          ppppppuVar8 = (undefined8 ******)0x0;
          local_70 = 0;
        }
        bVar3 = local_70;
        bVar11 = (byte)((ulong)ppppppuVar7 >> 0x3c);
        local_71 = bVar11 & 1;
        if ((CONCAT11(bVar11,local_70) & 0x1ff) >> 8 == 0) {
          _swift_bridgeObjectRelease(ppppppuVar7);
          ppppppuVar9 = ppppppuVar8;
          if (bVar3 == 0) {
LAB_10065b9c0:
            uVar17 = local_f0;
            ppppppuVar7 = ppppppuVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            ppppppuVar8 = ppppppuVar10;
            if (((ulong)ppppppuVar7 & 1) == 0) {
              ppppppuVar8 = (undefined8 ******)0x0;
              FUN_10062958c(0,(long)ppppppuVar10[2] + 1,1,ppppppuVar10);
            }
            ppppppuVar7 = (undefined8 ******)local_100;
            param_1 = (undefined8 ******)local_108;
            pppppuVar1 = ppppppuVar8[2];
            ppppppuVar10 = ppppppuVar8;
            if ((undefined8 *****)((ulong)ppppppuVar8[3] >> 1) <= pppppuVar1) {
              ppppppuVar10 = (undefined8 ******)(ulong)((undefined8 *****)0x1 < ppppppuVar8[3]);
              FUN_10062958c(ppppppuVar10,(undefined8 *****)((long)pppppuVar1 + 1U),1,ppppppuVar8);
            }
            ppppppuVar10[2] = (undefined8 *****)((long)pppppuVar1 + 1U);
            ppppppuVar10[(long)pppppuVar1 + 4] = ppppppuVar9;
            ppppppuVar9 = (undefined8 ******)local_d8;
            param_2 = (undefined8 ******)local_d8;
            if (local_e0 == uVar17) {
              uVar13 = local_e0;
              ppppppuVar8 = ppppppuVar7;
              if (uVar17 != local_e0) goto LAB_10065bb10;
              goto LAB_10065ba84;
            }
            puVar16 = (undefined1 *)0x0;
            goto LAB_10065b838;
          }
        }
        else {
          FUN_10065d640(ppppppuVar9,param_2,param_1,ppppppuVar7,local_e8);
          _swift_bridgeObjectRelease(ppppppuVar7);
          if (((ulong)param_2 & 1) == 0) goto LAB_10065b9c0;
        }
        _swift_bridgeObjectRelease(ppppppuVar10);
        ppppppuVar7 = param_4;
      }
      goto LAB_10065bc88;
    }
    if (uVar17 == (ulong)ppppppuVar9 >> 0xe) {
      uVar13 = (ulong)param_2 >> 0xe;
      ppppppuVar8 = ppppppuVar7;
      if (uVar17 == uVar13) {
LAB_10065ba84:
        _swift_bridgeObjectRelease(param_4);
joined_r0x00010065bce4:
        if (ppppppuVar12 == (undefined8 ******)0x0) {
          local_b0 = (undefined8 *****)0x0;
          pppppuStack_a8 = (undefined8 *****)0x0;
          uVar17 = (ulong)local_a0 >> 8;
          local_a0 = (undefined8 *****)CONCAT71((int7)uVar17,2);
          local_98 = ppppppuVar10;
          FUN_100645d2c();
          return local_b0;
        }
        local_a0 = (undefined8 *****)((ulong)local_a0 & 0xffffffffffffff00);
        local_b0 = (undefined8 *****)0x0;
        pppppuStack_a8 = (undefined8 *****)0x0;
        pppppuVar1 = ppppppuVar10[2];
        local_98 = (undefined8 *****)PTR___swiftEmptyArrayStorage_100995ea0;
        while( true ) {
          if (pppppuVar1 == (undefined8 *****)0x0) {
            _swift_bridgeObjectRelease(ppppppuVar10);
            return local_b0;
          }
          if ((long)ppppppuVar10[2] < (long)pppppuVar1) break;
          pppppuVar15 = ppppppuVar10[(long)pppppuVar1 + 3];
          FUN_100653350(ppppppuVar12);
          FUN_10064252c(pppppuVar15,0);
          pppppuVar1 = (undefined8 *****)((long)pppppuVar1 + -1);
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065bc20);
        (*pcVar4)();
      }
LAB_10065bb10:
      ppppppuVar7 = ppppppuVar10;
      if (uVar13 < uVar17) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10065bd4c);
        (*pcVar4)();
      }
      __sSsySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(param_4);
      if (((ulong)ppppppuVar9 ^ (ulong)param_2) < 0x4000) {
        _swift_bridgeObjectRelease(ppppppuVar7);
        ppppppuVar7 = ppppppuVar8;
      }
      else {
        puVar16 = puVar5 + -0x20;
        local_c0 = puVar16;
        *(undefined1 **)(puVar5 + -0x10) = local_e8;
        local_b0 = ppppppuVar9;
        pppppuStack_a8 = param_2;
        local_a0 = param_1;
        local_98 = ppppppuVar8;
        *(undefined8 *******)(puVar5 + -0x40) = &local_b0;
        *(code **)(puVar5 + -0x38) = FUN_10065e940;
        *(undefined1 **)(puVar5 + -0x30) = puVar16;
        _swift_bridgeObjectRetain(ppppppuVar8);
        if (((ulong)ppppppuVar8 >> 0x3c & 1) == 0) {
          if (((ulong)ppppppuVar8 >> 0x3d & 1) == 0) {
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              ppppppuVar14 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,ppppppuVar8);
              ppppppuVar10 = *(undefined8 *******)(puVar5 + -0x40);
            }
            else {
              ppppppuVar14 = (undefined8 ******)(((ulong)ppppppuVar8 & 0xfffffffffffffff) + 0x20);
              ppppppuVar10 = &local_b0;
            }
            bVar11 = (byte)*ppppppuVar10;
            FUN_10000d604();
            local_70 = bVar11 & 1;
          }
          else {
            uStack_80 = (ulong)ppppppuVar8 & 0xffffffffffffff;
            ppppppuVar14 = &local_88;
            ppppppuVar10 = (undefined8 ******)local_b0;
            local_88 = param_1;
            FUN_10000d604(ppppppuVar14,local_b0,pppppuStack_a8,local_a0,local_98,FUN_10065e940,
                          puVar16);
            local_70 = (byte)ppppppuVar10 & 1;
          }
        }
        else {
          ppppppuVar14 = (undefined8 ******)0x0;
          local_70 = 0;
        }
        bVar11 = (byte)((ulong)ppppppuVar8 >> 0x3c);
        local_71 = bVar11 & 1;
        uVar2 = CONCAT11(bVar11,local_70) & 0x1ff;
        _swift_bridgeObjectRelease(ppppppuVar8);
        ppppppuVar10 = (undefined8 ******)(ulong)uVar2;
        if (uVar2 >> 8 != 0) {
          FUN_10065d640(ppppppuVar9,param_2,param_1,ppppppuVar8,local_e8);
          ppppppuVar14 = ppppppuVar9;
          ppppppuVar10 = param_2;
        }
        _swift_bridgeObjectRelease(ppppppuVar8);
        if (((ulong)ppppppuVar10 & 1) == 0) {
          ppppppuVar10 = ppppppuVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          ppppppuVar9 = ppppppuVar7;
          if (((ulong)ppppppuVar10 & 1) == 0) {
            ppppppuVar9 = (undefined8 ******)0x0;
            FUN_10062958c(0,(long)ppppppuVar7[2] + 1,1,ppppppuVar7);
          }
          pppppuVar1 = ppppppuVar9[2];
          ppppppuVar10 = ppppppuVar9;
          if ((undefined8 *****)((ulong)ppppppuVar9[3] >> 1) <= pppppuVar1) {
            ppppppuVar10 = (undefined8 ******)(ulong)((undefined8 *****)0x1 < ppppppuVar9[3]);
            FUN_10062958c(ppppppuVar10,(undefined8 *****)((long)pppppuVar1 + 1U),1,ppppppuVar9);
          }
          ppppppuVar10[2] = (undefined8 *****)((long)pppppuVar1 + 1U);
          ppppppuVar10[(long)pppppuVar1 + 4] = ppppppuVar14;
          goto joined_r0x00010065bce4;
        }
      }
      goto LAB_10065bc88;
    }
LAB_10065b838:
    __sSs5index6beforeSS5IndexVAD_tF();
    bVar6 = SCARRY8((long)puVar16,1);
    puVar16 = puVar16 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10065bd2c);
      (*pcVar4)();
    }
  } while( true );
}

