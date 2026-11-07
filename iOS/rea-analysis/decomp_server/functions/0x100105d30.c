// rea decompile_all
// name: FUN_100105d30
// address: 0x100105d30
// body: available
// range: 0x100105d30-0x10010643f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010632c to 0x1003f124c FUN_1003f124c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001063c4 to 0x1001054c8 FUN_1001054c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100105d30(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long unaff_x22;
  undefined2 uVar18;
  
  uVar3 = 0;
  FUN_100401b14();
  *(undefined8 *)(unaff_x22 + 0x158) = uVar3;
  pcVar12 = (code *)0x0;
  FUN_1003fb48c(FUN_100106b98,0,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                0x800000010088abe0,0x135,0);
  if (DAT_100a73b60 != -1) {
    pcVar12 = FUN_1000efc4c;
    _swift_once(&DAT_100a73b60);
  }
  uVar4 = 0;
  FUN_1000b35b4();
  lVar5 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(char *)(*(long *)(unaff_x22 + 0x150) +
                 _TtC14UURemoteServer16WallpaperManager::isSystemSleeping) == '\x01') {
      bVar2 = *(byte *)(unaff_x22 + 0x5b);
      pcVar12 = FUN_100106bf0;
      uVar3 = 0x142;
      goto LAB_100105e64;
    }
    FUN_1001093b4();
    *(long *)(unaff_x22 + 0x160) = lVar5;
    *(code **)(unaff_x22 + 0x168) = pcVar12;
    if (lVar5 != 0) {
      if ((*(byte *)(unaff_x22 + 0x5b) & 1) == 0) {
        pcVar15 = *(code **)(unaff_x22 + 0x148);
        if (pcVar12 == pcVar15) {
          lVar5 = 0x30;
          _swift_task_alloc();
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(code **)(lVar5 + 0x18) = pcVar12;
          *(code **)(lVar5 + 0x20) = pcVar12;
          FUN_1003fb48c(FUN_10010a374,lVar5,0xd000000000000097,0x8000000100889170,0xd000000000000022
                        ,0x800000010088abe0,0x15b,0);
          _swift_task_dealloc(lVar5);
          goto LAB_100105f4c;
        }
        uVar4 = (ulong)pcVar15 ^ (ulong)pcVar12;
        uVar3 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        ))))))));
        uVar18 = NEON_uaddlv(uVar3,1);
        lVar6 = 0x30;
        _swift_task_alloc();
        *(ulong *)(lVar6 + 0x10) = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar18) & 0xffffffff;
        *(code **)(lVar6 + 0x18) = pcVar15;
        *(code **)(lVar6 + 0x20) = pcVar12;
        FUN_1003fb48c(FUN_10010a368,lVar6,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                      0x800000010088abe0,0x15e,0);
        _swift_task_dealloc(lVar6);
      }
      uVar4 = 0;
      FUN_1003fb48c(FUN_100106f80,0,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                    0x800000010088abe0,0x162,0);
      FUN_100109fdc();
      *(long *)(unaff_x22 + 0x170) = lVar5;
      *(ulong *)(unaff_x22 + 0x178) = uVar4;
      if (uVar4 >> 0x3c < 0xf) {
        lVar16 = *(long *)(unaff_x22 + 0x150);
        *(code **)(unaff_x22 + 0x140) = pcVar12;
        lVar17 = lVar5;
        FUN_10010a2d4();
        lVar6 = unaff_x22 + 0x140;
        uVar13 = 0x10;
        __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(lVar6,0x10,0,PTR___ss6UInt64VN_100995e10,lVar17);
        *(long *)(unaff_x22 + 0x180) = lVar6;
        *(ulong *)(unaff_x22 + 0x188) = uVar13;
        lVar17 = _TtC14UURemoteServer16WallpaperManager::uploadCaches;
        *(long *)(unaff_x22 + 400) = _TtC14UURemoteServer16WallpaperManager::uploadCaches;
        _swift_beginAccess(lVar16 + lVar17,unaff_x22 + 0xe8,0x20,0);
        lVar17 = *(long *)(lVar16 + lVar17);
        if (*(long *)(lVar17 + 0x10) != 0) {
          _swift_bridgeObjectRetain(lVar17);
          uVar14 = uVar13;
          FUN_1001a2c70();
          if ((uVar14 & 1) != 0) {
            puVar7 = (undefined8 *)(*(long *)(lVar17 + 0x38) + lVar6 * 0x10);
            uVar3 = *puVar7;
            uVar1 = puVar7[1];
            _swift_bridgeObjectRetain(uVar1);
            _swift_endAccess(unaff_x22 + 0xe8);
            _swift_bridgeObjectRelease(lVar17);
            _swift_bridgeObjectRelease(uVar13);
            *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
            *(undefined8 *)(unaff_x22 + 0x138) = uVar1;
            puVar7 = (undefined8 *)0x20;
            _swift_task_alloc();
            puVar7[2] = unaff_x22 + 0x130;
            FUN_1003fb48c(FUN_10010a360,puVar7,0xd000000000000097,0x8000000100889170,
                          0xd000000000000022,0x800000010088abe0,0x16f,0);
            _swift_task_dealloc();
            uVar13 = *(ulong *)(unaff_x22 + 0x138);
            uVar4 = *(ulong *)(unaff_x22 + 0x130) & 0xffffffffffff;
            if ((uVar13 & 0x2000000000000000) != 0) {
              uVar4 = uVar13 >> 0x38 & 0xf;
            }
            if (uVar4 != 0) {
              lVar5 = 0x20;
              _swift_task_alloc();
              *(long *)(lVar5 + 0x10) = unaff_x22 + 0x130;
              FUN_1003fb48c(FUN_10010a350,lVar5,0xd000000000000097,0x8000000100889170,
                            0xd000000000000022,0x800000010088abe0,0x17e,0);
              _swift_task_dealloc(lVar5);
              uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
              *(undefined8 *)(unaff_x22 + 0x1a8) = uVar3;
              *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x130);
              *(undefined8 *)(unaff_x22 + 0x120) = uVar3;
              *(undefined1 *)(unaff_x22 + 0x128) = 6;
              puVar8 = &DAT_100a78a38;
              FUN_100004bb4(&DAT_100a78a38,&DAT_10080d8a8);
              puVar9 = &DAT_100a78a40;
              FUN_10003f840(&DAT_100a78a40,&DAT_100a78a38,&DAT_10080d8a8,
                            &TargetProtocolConformanceDescriptor_100820bb0);
              puVar10 = &DAT_100a78a48;
              FUN_10003f840(&DAT_100a78a48,&DAT_100a78a38,&DAT_10080d8a8,
                            &TargetProtocolConformanceDescriptor_100820bd8);
              _swift_bridgeObjectRetain(uVar3);
              lVar5 = unaff_x22 + 0x118;
              FUN_10039e070(lVar5,puVar8,0,0,0,&DAT_1009b82f0,puVar8,&PTR_PTR_100a8bc30,puVar9,
                            puVar10);
              *(long *)(unaff_x22 + 0x1b0) = lVar5;
              _swift_bridgeObjectRelease(uVar3);
              plVar11 = (long *)0x50;
              _swift_task_alloc();
              *(long **)(unaff_x22 + 0x1b8) = plVar11;
              *plVar11 = unaff_x22;
              plVar11[1] = (long)FUN_1001067cc;
              FUN_1003f124c(plVar11,unaff_x22 + 0x60);
              return;
            }
            uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
            uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
            FUN_100109f9c();
            _swift_allocError(&DAT_10099d560,puVar7,0,0);
            puVar7[1] = 4;
            *puVar7 = 0;
            puVar7[2] = 0;
            _swift_willThrow();
            FUN_100006cc8(uVar3,uVar1);
            _swift_bridgeObjectRelease(uVar13);
            goto LAB_100105eac;
          }
          _swift_bridgeObjectRelease(lVar17);
        }
        _swift_endAccess(unaff_x22 + 0xe8);
        FUN_1003fb48c(FUN_100107078,0,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                      0x800000010088abe0,0x171,0);
        plVar11 = (long *)0xc0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x198) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_100106440;
        FUN_1001054c8(plVar11,unaff_x22 + 0xb0,lVar5,uVar4,1);
        return;
      }
      pcVar12 = FUN_100106fac;
      FUN_1003fb4ec(FUN_100106fac,0,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                    0x800000010088abe0,0x164,0);
      FUN_100109f9c();
      _swift_allocError(&DAT_10099d560,pcVar12,0,0);
      *(undefined8 *)(pcVar12 + 8) = 2;
      *(undefined8 *)pcVar12 = 0;
      *(undefined8 *)(pcVar12 + 0x10) = 0;
      _swift_willThrow();
      goto LAB_100105eac;
    }
    pcVar12 = FUN_100106c1c;
    FUN_1003fb4ec(FUN_100106c1c,0,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                  0x800000010088abe0,0x14b,0);
  }
  else {
    bVar2 = *(byte *)(unaff_x22 + 0x5b);
    pcVar12 = FUN_100106bc4;
    uVar3 = 0x139;
LAB_100105e64:
    FUN_1003fb48c(pcVar12,0,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                  0x800000010088abe0,uVar3,0);
    if ((bVar2 & 1) == 0) {
LAB_100105f4c:
                    /* WARNING: Could not recover jumptable at 0x000100105f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x148));
      return;
    }
  }
  FUN_100109f9c();
  _swift_allocError(&DAT_10099d560,pcVar12,0,0);
  *(undefined8 *)(pcVar12 + 8) = 1;
  *(undefined8 *)pcVar12 = 0;
  *(undefined8 *)(pcVar12 + 0x10) = 0;
  _swift_willThrow();
LAB_100105eac:
                    /* WARNING: Could not recover jumptable at 0x000100105ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

