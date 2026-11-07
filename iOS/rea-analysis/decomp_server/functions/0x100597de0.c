// rea decompile_all
// name: FUN_100597de0
// address: 0x100597de0
// body: available
// range: 0x100597de0-0x1005987af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100597de0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  long lStack_78;
  undefined1 local_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_e0,0,0);
  cVar6 = *(char *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_f8,0,0);
  cVar7 = *(char *)(param_2 + 0x10);
  if (cVar6 == '\x03') {
    if (cVar7 == '\x03') {
LAB_100597e58:
      _swift_beginAccess(param_1 + 0x11,auStack_110,0,0);
      bVar8 = *(byte *)(param_1 + 0x11);
      _swift_beginAccess(param_2 + 0x11,auStack_128,0,0);
      bVar9 = *(byte *)(param_2 + 0x11);
      if (bVar8 == 2) {
        if (bVar9 == 2) {
LAB_100597eac:
          _swift_beginAccess(param_1 + 0x12,auStack_140,0,0);
          cVar6 = *(char *)(param_1 + 0x12);
          _swift_beginAccess(param_2 + 0x12,auStack_158,0,0);
          cVar7 = *(char *)(param_2 + 0x12);
          if (cVar6 == '\x03') {
            if (cVar7 != '\x03') goto LAB_1005985b8;
          }
          else {
            uVar13 = 0;
            if ((cVar7 == '\x03') || (cVar6 != cVar7)) goto LAB_1005985bc;
          }
          _swift_beginAccess(param_1 + 0x13,auStack_170,0,0);
          bVar8 = *(byte *)(param_1 + 0x13);
          _swift_beginAccess(param_2 + 0x13,auStack_188,0,0);
          bVar9 = *(byte *)(param_2 + 0x13);
          if (bVar8 == 2) {
            if (bVar9 == 2) {
LAB_100597f58:
              _swift_beginAccess(param_1 + 0x14,auStack_1a0,0,0);
              bVar8 = *(byte *)(param_1 + 0x14);
              _swift_beginAccess(param_2 + 0x14,auStack_1b8,0,0);
              bVar9 = *(byte *)(param_2 + 0x14);
              if (bVar8 == 2) {
                if (bVar9 == 2) {
LAB_100597fac:
                  _swift_beginAccess(param_1 + 0x15,auStack_1d0,0,0);
                  bVar8 = *(byte *)(param_1 + 0x15);
                  _swift_beginAccess(param_2 + 0x15,auStack_1e8,0,0);
                  bVar9 = *(byte *)(param_2 + 0x15);
                  if (bVar8 == 2) {
                    if (bVar9 == 2) {
LAB_100598000:
                      _swift_beginAccess(param_1 + 0x16,auStack_200,0,0);
                      bVar8 = *(byte *)(param_1 + 0x16);
                      _swift_beginAccess(param_2 + 0x16,auStack_218,0,0);
                      bVar9 = *(byte *)(param_2 + 0x16);
                      if (bVar8 == 2) {
                        if (bVar9 == 2) {
LAB_100598054:
                          _swift_beginAccess(param_1 + 0x17,auStack_230,0,0);
                          bVar8 = *(byte *)(param_1 + 0x17);
                          _swift_beginAccess(param_2 + 0x17,auStack_248,0,0);
                          bVar9 = *(byte *)(param_2 + 0x17);
                          if (bVar8 == 2) {
                            if (bVar9 == 2) {
LAB_1005980a8:
                              _swift_beginAccess(param_1 + 0x18,auStack_260,0,0);
                              cVar6 = *(char *)(param_1 + 0x18);
                              _swift_beginAccess(param_2 + 0x18,auStack_278,0,0);
                              cVar7 = *(char *)(param_2 + 0x18);
                              if (cVar6 == '\x03') {
                                if (cVar7 != '\x03') goto LAB_1005985b8;
                              }
                              else {
                                uVar13 = 0;
                                if ((cVar7 == '\x03') || (cVar6 != cVar7)) goto LAB_1005985bc;
                              }
                              _swift_beginAccess(param_1 + 0x20,auStack_290,0,0);
                              uVar14 = *(ulong *)(param_1 + 0x20);
                              _swift_beginAccess(param_2 + 0x20,auStack_2a8,0,0);
                              FUN_100572fcc(uVar14,*(undefined8 *)(param_2 + 0x20));
                              if ((uVar14 & 1) != 0) {
                                _swift_beginAccess(param_1 + 0x28,auStack_2c0,0,0);
                                uVar15 = *(ulong *)(param_1 + 0x28);
                                _swift_beginAccess(param_2 + 0x28,auStack_2d8,0,0);
                                uVar16 = *(undefined8 *)(param_2 + 0x28);
                                _swift_retain(param_1);
                                _swift_retain(param_2);
                                _swift_bridgeObjectRetain(uVar15);
                                _swift_bridgeObjectRetain(uVar16);
                                uVar14 = uVar15;
                                FUN_100573028(uVar15,uVar16);
                                _swift_bridgeObjectRelease(uVar15);
                                _swift_bridgeObjectRelease(uVar16);
                                if ((uVar14 & 1) == 0) {
LAB_1005982c0:
                                  _swift_release(param_1);
                                  _swift_release(param_2);
                                }
                                else {
                                  _swift_beginAccess(param_1 + 0x30,auStack_2f0,0,0);
                                  uVar14 = *(ulong *)(param_1 + 0x30);
                                  uVar17 = *(undefined8 *)(param_1 + 0x38);
                                  lVar19 = *(long *)(param_1 + 0x40);
                                  uVar18 = *(undefined8 *)(param_1 + 0x48);
                                  _swift_beginAccess(param_2 + 0x30,auStack_308,0,0);
                                  uVar16 = *(undefined8 *)(param_2 + 0x30);
                                  uVar1 = *(undefined8 *)(param_2 + 0x38);
                                  lVar20 = *(long *)(param_2 + 0x40);
                                  uVar2 = *(undefined8 *)(param_2 + 0x48);
                                  if (lVar19 == 0) {
                                    FUN_1005a7f54(uVar14,uVar17,0,uVar18);
                                    if (lVar20 == 0) {
                                      FUN_1005a7f54(uVar16,uVar1,0,uVar2);
                                      FUN_100541944(uVar14,uVar17,0,uVar18);
LAB_1005983d8:
                                      _swift_beginAccess(param_1 + 0x50,auStack_320,0,0);
                                      uVar16 = *(undefined8 *)(param_1 + 0x50);
                                      uVar2 = *(undefined8 *)(param_1 + 0x58);
                                      uVar17 = *(undefined8 *)(param_1 + 0x60);
                                      uVar3 = *(undefined8 *)(param_1 + 0x68);
                                      lVar20 = *(long *)(param_1 + 0x70);
                                      uVar10 = *(undefined1 *)(param_1 + 0x78);
                                      _swift_beginAccess(param_2 + 0x50,auStack_338,0,0);
                                      uVar18 = *(undefined8 *)(param_2 + 0x50);
                                      uVar4 = *(undefined8 *)(param_2 + 0x58);
                                      uVar1 = *(undefined8 *)(param_2 + 0x60);
                                      uVar5 = *(undefined8 *)(param_2 + 0x68);
                                      lVar19 = *(long *)(param_2 + 0x70);
                                      uVar11 = *(undefined1 *)(param_2 + 0x78);
                                      if (lVar20 == 1) {
                                        FUN_1005a8504(uVar16,uVar2,uVar17,uVar3,1,uVar10);
                                        if (lVar19 != 1) {
                                          FUN_1005a8504(uVar18,uVar4,uVar1,uVar5,lVar19,uVar11);
                                          _swift_release(param_1);
                                          _swift_release(param_2);
LAB_100598588:
                                          FUN_1005419bc(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                          FUN_1005419bc(uVar18,uVar4,uVar1,uVar5,lVar19,uVar11);
                                          goto LAB_1005985b8;
                                        }
                                        FUN_1005a8504(uVar18,uVar4,uVar1,uVar5,1,uVar11);
                                        FUN_1005419bc(uVar16,uVar2,uVar17,uVar3,1,uVar10);
                                      }
                                      else {
                                        if (lVar19 == 1) {
                                          FUN_1005a8504(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                          FUN_1005a8504(uVar18,uVar4,uVar1,uVar5,1,uVar11);
                                          FUN_1005a8504(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                          FUN_1005a8504(uVar18,uVar4,uVar1,uVar5,1,uVar11);
                                          _swift_release(param_1);
                                          _swift_release(param_2);
                                          FUN_1005419bc(uVar18,uVar4,uVar1,uVar5,1,uVar11);
                                          FUN_1005419bc(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                          goto LAB_100598588;
                                        }
                                        local_88 = (undefined1)uVar1;
                                        local_87 = (undefined1)((ulong)uVar1 >> 8);
                                        local_b8 = (undefined1)uVar17;
                                        local_b7 = (undefined1)((ulong)uVar17 >> 8);
                                        local_c8 = uVar16;
                                        uStack_c0 = uVar2;
                                        local_b0 = uVar3;
                                        lStack_a8 = lVar20;
                                        local_a0 = uVar10;
                                        local_98 = uVar18;
                                        uStack_90 = uVar4;
                                        local_80 = uVar5;
                                        lStack_78 = lVar19;
                                        local_70 = uVar11;
                                        FUN_1005a8504(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                        FUN_1005a8504(uVar18,uVar4,uVar1,uVar5,lVar19,uVar11);
                                        FUN_1005a8504(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                        FUN_1005a8504(uVar18,uVar4,uVar1,uVar5,lVar19,uVar11);
                                        puVar12 = &local_c8;
                                        FUN_1005a4228(puVar12,&local_98);
                                        FUN_1005419bc(uVar18,uVar4,uVar1,uVar5,lVar19,uVar11);
                                        FUN_1005419bc(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                        FUN_1005419bc(uVar18,uVar4,uVar1,uVar5,lVar19,uVar11);
                                        FUN_1005419bc(uVar16,uVar2,uVar17,uVar3,lVar20,uVar10);
                                        if (((ulong)puVar12 & 1) == 0) goto LAB_1005982c0;
                                      }
                                      _swift_beginAccess(param_1 + 0x80,auStack_350,0,0);
                                      uVar17 = *(undefined8 *)(param_1 + 0x80);
                                      _swift_beginAccess(param_2 + 0x80,auStack_368,0,0);
                                      uVar18 = *(undefined8 *)(param_2 + 0x80);
                                      _swift_bridgeObjectRetain(uVar17);
                                      _swift_bridgeObjectRetain(uVar18);
                                      uVar16 = uVar17;
                                      FUN_1005707f8(uVar17,uVar18);
                                      uVar13 = (uint)uVar16;
                                      _swift_release(param_1);
                                      _swift_release(param_2);
                                      _swift_bridgeObjectRelease(uVar17);
                                      _swift_bridgeObjectRelease(uVar18);
                                      goto LAB_1005985bc;
                                    }
                                    FUN_1005a7f54(uVar16,uVar1,lVar20,uVar2);
                                    _swift_release(param_1);
                                    _swift_release(param_2);
                                  }
                                  else {
                                    if (lVar20 != 0) {
                                      FUN_1005a7f54(uVar14,uVar17,lVar19,uVar18);
                                      FUN_1005a7f54(uVar16,uVar1,lVar20,uVar2);
                                      FUN_1005a7f54(uVar14,uVar17,lVar19,uVar18);
                                      FUN_1005a7f54(uVar16,uVar1,lVar20,uVar2);
                                      uVar15 = uVar14;
                                      FUN_1005a7724(uVar14,uVar17,lVar19,uVar18,uVar16,uVar1,lVar20,
                                                    uVar2);
                                      FUN_100541944(uVar16,uVar1,lVar20,uVar2);
                                      FUN_100541944(uVar14,uVar17,lVar19,uVar18);
                                      FUN_100541944(uVar16,uVar1,lVar20,uVar2);
                                      FUN_100541944(uVar14,uVar17,lVar19,uVar18);
                                      if ((uVar15 & 1) != 0) goto LAB_1005983d8;
                                      goto LAB_1005982c0;
                                    }
                                    FUN_1005a7f54(uVar14,uVar17,lVar19,uVar18);
                                    FUN_1005a7f54(uVar16,uVar1,0,uVar2);
                                    FUN_1005a7f54(uVar14,uVar17,lVar19,uVar18);
                                    FUN_1005a7f54(uVar16,uVar1,0,uVar2);
                                    _swift_release(param_1);
                                    _swift_release(param_2);
                                    FUN_100541944(uVar16,uVar1,0,uVar2);
                                    FUN_100541944(uVar14,uVar17,lVar19,uVar18);
                                  }
                                  FUN_100541944(uVar14,uVar17,lVar19,uVar18);
                                  FUN_100541944(uVar16,uVar1,lVar20,uVar2);
                                }
                              }
                            }
                          }
                          else if ((bVar9 != 2) && (((bVar8 ^ bVar9) & 1) == 0)) goto LAB_1005980a8;
                        }
                      }
                      else if ((bVar9 != 2) && (((bVar8 ^ bVar9) & 1) == 0)) goto LAB_100598054;
                    }
                  }
                  else if ((bVar9 != 2) && (((bVar8 ^ bVar9) & 1) == 0)) goto LAB_100598000;
                }
              }
              else if ((bVar9 != 2) && (((bVar8 ^ bVar9) & 1) == 0)) goto LAB_100597fac;
            }
          }
          else if ((bVar9 != 2) && (((bVar8 ^ bVar9) & 1) == 0)) goto LAB_100597f58;
        }
      }
      else if ((bVar9 != 2) && (((bVar8 ^ bVar9) & 1) == 0)) goto LAB_100597eac;
    }
  }
  else if (cVar7 != '\x03' && cVar6 == cVar7) goto LAB_100597e58;
LAB_1005985b8:
  uVar13 = 0;
LAB_1005985bc:
  return uVar13 & 1;
}

