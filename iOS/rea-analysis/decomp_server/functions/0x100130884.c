// rea decompile_all
// name: FUN_100130884
// address: 0x100130884
// body: available
// range: 0x100130884-0x1001310cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100130884(ulong *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined1 auStack_110 [16];
  undefined *local_f0;
  undefined *puStack_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  uint local_ac;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined1 *local_80;
  ulong local_78;
  ulong uStack_70;
  
  ppuVar2 = &local_f0;
  uVar15 = *unaff_x20;
  if (uVar15 < 3) {
    uVar11 = unaff_x20[1];
    if (uVar11 < 3) {
      if (unaff_x20[10] == 0) {
        uVar5 = 0;
      }
      else {
        if (unaff_x20[10] != 1) {
          uVar3 = 0;
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
          puVar4 = auStack_110;
          pcVar1 = FUN_100132694;
          uVar3 = 0x53;
          goto LAB_100130c04;
        }
        uVar5 = 1;
      }
      uVar12 = unaff_x20[2];
      uVar13 = unaff_x20[3];
      local_78 = local_78 & 0xffffffffffffff00;
      (*(code *)PTR____chkstk_darwin_100995498)();
      _swift_bridgeObjectRetain(uVar13);
      uVar14 = 0;
      FUN_100152adc(FUN_10013269c,auStack_110,uVar12,uVar13);
      uVar9 = uVar13;
      if ((uVar14 & 1) == 0) {
        uVar14 = unaff_x20[5];
        uVar9 = unaff_x20[6];
        local_78 = local_78 & 0xffffffffffffff00;
        local_ac = uVar5;
        local_a8 = uVar15;
        local_80 = (undefined1 *)&local_f0;
        (*(code *)PTR____chkstk_darwin_100995498)();
        _swift_bridgeObjectRetain(uVar9);
        uVar15 = 0;
        local_b8 = uVar14;
        FUN_100152adc(FUN_1001326cc,auStack_110,uVar14,uVar9);
        ppuVar2 = (undefined **)local_80;
        if ((uVar15 & 1) == 0) {
          uVar15 = unaff_x20[7];
          uVar14 = unaff_x20[8];
          local_78 = local_78 & 0xffffffffffffff00;
          local_d0 = uVar12;
          local_c8 = uVar9;
          local_c0 = uVar13;
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(ulong **)((long)ppuVar2 + -0x10) = &local_78;
          _swift_bridgeObjectRetain(uVar14);
          uVar12 = 0;
          FUN_100152adc(FUN_1001326cc,(undefined1 *)((long)ppuVar2 + -0x20),uVar15,uVar14);
          if ((uVar12 & 1) == 0) {
            puVar16 = (undefined *)unaff_x20[9];
            local_e0 = *(long *)(puVar16 + 0x10);
            if (local_e0 != 0) {
              local_d8 = 0;
              local_f0 = puVar16 + 0x20;
              puStack_e8 = puVar16;
              do {
                uVar12 = *(ulong *)(local_f0 + local_d8 * 0x10);
                uVar13 = *(ulong *)((long)(local_f0 + local_d8 * 0x10) + 8);
                local_d8 = local_d8 + 1;
                local_80 = (undefined1 *)(uVar12 & 0xffffffffffff);
                if ((uVar13 & 0x2000000000000000) != 0) {
                  local_80 = (undefined1 *)(uVar13 >> 0x38 & 0xf);
                }
                local_88 = (long)local_80 << 2;
                uVar5 = (uint)(uVar12 >> 0x3b) & 1;
                if ((uVar13 & 0x1000000000000000) == 0) {
                  uVar5 = 1;
                }
                uVar7 = 4L << uVar5;
                local_98 = uVar13 & 0xffffffffffffff;
                local_a0 = (uVar13 & 0xfffffffffffffff) + 0x20;
                uVar9 = 0xf;
                local_90 = uVar12;
                while (local_88 != uVar9 >> 0xe) {
                  uVar8 = uVar9 & 0xc;
                  uVar10 = uVar9;
                  if (uVar8 == uVar7) {
                    FUN_10000caa8(uVar9,local_90,uVar13);
                    uVar12 = local_90;
                  }
                  puVar4 = (undefined1 *)(uVar10 >> 0x10);
                  if (local_80 <= puVar4) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001310cc);
                    (*pcVar1)();
                  }
                  if ((uVar13 >> 0x3c & 1) == 0) {
                    if ((uVar13 >> 0x3d & 1) != 0) {
                      local_78 = uVar12;
                      uStack_70 = local_98;
                      uVar10 = (ulong)*(byte *)((long)&local_78 + (long)puVar4);
                      goto joined_r0x000100130dcc;
                    }
                    uVar10 = local_a0;
                    if ((uVar12 >> 0x3c & 1) == 0) {
                      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(uVar12,uVar13);
                      uVar10 = uVar12;
                      uVar12 = local_90;
                    }
                    uVar10 = (ulong)(byte)puVar4[uVar10];
                    if (uVar8 == uVar7) goto LAB_100130dd0;
LAB_100130d68:
                    if ((uVar13 >> 0x3c & 1) != 0) goto LAB_100130d6c;
LAB_100130cec:
                    uVar9 = (uVar9 & 0xffffffffffff0000) + 0x10004;
                  }
                  else {
                    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
                    uVar12 = local_90;
joined_r0x000100130dcc:
                    if (uVar8 != uVar7) goto LAB_100130d68;
LAB_100130dd0:
                    FUN_10000caa8(uVar9,local_90,uVar13);
                    uVar12 = local_90;
                    if ((uVar13 >> 0x3c & 1) == 0) goto LAB_100130cec;
LAB_100130d6c:
                    if (local_80 <= (undefined1 *)(uVar9 >> 0x10)) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001310d0);
                      (*pcVar1)();
                    }
                    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar9,local_90,uVar13);
                    uVar12 = local_90;
                  }
                  if ((uVar10 & 0xff) == 0) goto LAB_100130b70;
                }
                puVar16 = puStack_e8;
              } while (local_d8 != local_e0);
            }
            uVar9 = local_c0;
            uVar13 = local_c8;
            uVar12 = local_d0;
            if ((local_a8 & 0xff) == 0) {
              _swift_bridgeObjectRetain(puVar16);
              _swift_bridgeObjectRelease(local_c0);
              _swift_bridgeObjectRelease(local_c8);
              _swift_bridgeObjectRelease(uVar14);
              uVar12 = 0;
              uVar9 = 0xe000000000000000;
              uVar13 = 0xe000000000000000;
              uVar7 = 0;
              uVar14 = 0xe000000000000000;
              uVar15 = 0;
              uVar10 = 0;
              if ((local_a8 & 1) == 0) {
                uVar15 = 0;
                uVar10 = 0;
                uVar7 = 0;
                uVar8 = local_a8;
                goto LAB_1001310a4;
              }
LAB_100130fe4:
              uVar8 = local_a8;
              if (local_ac != 0) goto LAB_1001310a4;
            }
            else {
              uVar10 = unaff_x20[4];
              if (((uint)local_a8 & 0xff) == 1) {
                _swift_bridgeObjectRetain(puVar16);
                _swift_bridgeObjectRelease(uVar14);
                if ((local_ac & 1) == 0) {
                  uVar15 = local_d0 & 0xffffffffffff;
                  if ((uVar9 & 0x2000000000000000) != 0) {
                    uVar15 = uVar9 >> 0x38 & 0xf;
                  }
                  uVar12 = uVar13;
                  uVar14 = uVar9;
                  if ((uVar15 == 0) ||
                     (uVar12 = uVar9, uVar14 = uVar13, uVar10 - 0x10000 < 0xffffffffffff0001)) {
                    _swift_bridgeObjectRelease(uVar12);
                    _swift_bridgeObjectRelease(uVar14);
                    _swift_bridgeObjectRelease(puVar16);
                    uVar3 = 0;
                    FUN_100401b14(0);
                    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
                    puVar4 = (undefined1 *)((long)ppuVar2 + -0x20);
                    *(ulong **)((long)ppuVar2 + -0x10) = unaff_x20;
                    pcVar1 = FUN_1001326c4;
                    uVar3 = 0x7e;
                    goto LAB_100130c04;
                  }
                  uVar15 = 0;
                  uVar14 = 0xe000000000000000;
                  uVar8 = 1;
                  uVar7 = local_b8;
                  uVar12 = local_d0;
                  if ((local_a8 & 1) != 0) goto LAB_1001310bc;
                }
                else {
                  _swift_bridgeObjectRelease(uVar9);
                  _swift_bridgeObjectRelease(uVar13);
                  uVar15 = 0;
                  uVar10 = 0;
                  uVar9 = 0xe000000000000000;
                  uVar13 = 0xe000000000000000;
                  uVar14 = 0xe000000000000000;
                  uVar7 = 0;
                  uVar8 = 1;
                  uVar12 = 0;
                }
              }
              else {
                uVar7 = local_d0 & 0xffffffffffff;
                if ((local_c0 & 0x2000000000000000) != 0) {
                  uVar7 = local_c0 >> 0x38 & 0xf;
                }
                uVar8 = uVar14;
                uVar6 = local_c0;
                if ((uVar7 == 0) ||
                   (uVar8 = local_c0, uVar6 = uVar14, uVar10 - 0x10000 < 0xffffffffffff0001)) {
                  _swift_bridgeObjectRelease(uVar8);
                  _swift_bridgeObjectRelease(uVar13);
                  _swift_bridgeObjectRelease(uVar6);
                  uVar3 = 0;
                  FUN_100401b14(0);
                  (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
                  puVar4 = (undefined1 *)((long)ppuVar2 + -0x20);
                  *(ulong **)((long)ppuVar2 + -0x10) = unaff_x20;
                  pcVar1 = FUN_1001326bc;
                  uVar3 = 0x89;
                  goto LAB_100130c04;
                }
                _swift_bridgeObjectRetain(puVar16);
                uVar7 = local_b8;
                uVar8 = local_a8;
                if ((local_a8 & 1) != 0) goto LAB_100130fe4;
              }
LAB_1001310a4:
              _swift_bridgeObjectRelease(puVar16);
              puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
            }
LAB_1001310bc:
            uVar6 = (ulong)local_ac;
            goto LAB_100130c40;
          }
LAB_100130b70:
          _swift_bridgeObjectRelease(local_c0);
          uVar9 = uVar14;
          uVar13 = local_c8;
        }
        _swift_bridgeObjectRelease(uVar13);
      }
      _swift_bridgeObjectRelease(uVar9);
      uVar3 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
      puVar4 = (undefined1 *)((long)ppuVar2 + -0x20);
      *(ulong **)((long)ppuVar2 + -0x10) = unaff_x20;
      pcVar1 = FUN_1001326b4;
      uVar3 = 0x5d;
    }
    else {
      uVar3 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
      puVar4 = auStack_110;
      pcVar1 = FUN_10013268c;
      uVar3 = 0x4f;
    }
  }
  else {
    uVar3 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
    puVar4 = auStack_110;
    pcVar1 = FUN_100132684;
    uVar3 = 0x48;
  }
LAB_100130c04:
  FUN_1003fb4ec(pcVar1,puVar4,0xd00000000000009d,0x800000010088f830,&DAT_d000000000000018,
                0x800000010088f960,uVar3,0xb);
  uVar8 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar7 = 0;
  uVar13 = 0;
  uVar15 = 0;
  uVar14 = 0;
  puVar16 = (undefined *)0x0;
  uVar6 = 0;
LAB_100130c40:
  *param_1 = uVar8;
  param_1[1] = uVar11;
  param_1[2] = uVar12;
  param_1[3] = uVar9;
  param_1[4] = uVar10;
  param_1[5] = uVar7;
  param_1[6] = uVar13;
  param_1[7] = uVar15;
  param_1[8] = uVar14;
  param_1[9] = (ulong)puVar16;
  param_1[10] = uVar6;
  return;
}

