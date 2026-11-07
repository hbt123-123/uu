// rea decompile_all
// name: FUN_10068f6b0
// address: 0x10068f6b0
// body: available
// range: 0x10068f6b0-0x1006904a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010068fef4) */
/* WARNING: Removing unreachable block (ram,0x000100690018) */
/* WARNING: Removing unreachable block (ram,0x000100690168) */
/* WARNING: Removing unreachable block (ram,0x00010068fe80) */
/* WARNING: Removing unreachable block (ram,0x00010068ff80) */
/* WARNING: Removing unreachable block (ram,0x00010069030c) */
/* WARNING: Removing unreachable block (ram,0x00010068fb74) */
/* WARNING: Removing unreachable block (ram,0x00010068fafc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff20 : 0x000100690444 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10068f6b0(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ID IVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long unaff_x21;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  ID local_120 [3];
  undefined8 local_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  
  uStack_f8 = 0;
  local_100 = (undefined *)0x0;
  local_e8 = (undefined *)0x0;
  local_f0 = 0;
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar13);
  __ss7DecoderP20singleValueContainers06Singlec8DecodingD0_pyKFTj(&local_e0,uVar13,uVar18);
  if (unaff_x21 == 0) {
    FUN_1000a0074(&local_e0,&local_a0);
    uVar13 = uStack_80;
    puVar11 = local_88;
    FUN_10003f030(&local_a0,local_88);
    __ss28SingleValueDecodingContainerP9decodeNilSbyFTj(puVar11,uVar13);
    if (((ulong)puVar11 & 1) == 0) {
      puVar16 = (undefined8 *)((ulong)&local_100 | 8);
      puVar11 = &DAT_100ab9fe8;
      FUN_100004bb4(&DAT_100ab9fe8,&DAT_10084dd70);
      _swift_allocObject();
      puVar8 = PTR___sSbSesWP_1009958e0;
      puVar6 = PTR___sSbN_1009958c8;
      puVar20 = (undefined *)0xf;
      *(undefined8 *)(puVar11 + 0x18) = 0x1e;
      *(undefined8 *)(puVar11 + 0x10) = 0xf;
      puVar9 = PTR___sSiN_100995968;
      puVar7 = PTR___sSbSEsWP_1009958d0;
      *(undefined **)(puVar11 + 0x20) = puVar6;
      *(undefined **)(puVar11 + 0x28) = puVar8;
      puVar8 = PTR___sSiSesWP_100995998;
      puVar6 = PTR___sSiSEsWP_100995970;
      *(undefined **)(puVar11 + 0x30) = puVar7;
      *(undefined **)(puVar11 + 0x38) = puVar9;
      puVar9 = PTR___ss4Int8VSesWP_100995c30;
      puVar7 = PTR___ss4Int8VN_100995c20;
      *(undefined **)(puVar11 + 0x40) = puVar8;
      *(undefined **)(puVar11 + 0x48) = puVar6;
      puVar8 = PTR___ss5Int16VN_100995c50;
      puVar6 = PTR___ss4Int8VSEsWP_100995c28;
      *(undefined **)(puVar11 + 0x50) = puVar7;
      *(undefined **)(puVar11 + 0x58) = puVar9;
      puVar9 = PTR___ss5Int16VSesWP_100995c60;
      puVar7 = PTR___ss5Int16VSEsWP_100995c58;
      *(undefined **)(puVar11 + 0x60) = puVar6;
      *(undefined **)(puVar11 + 0x68) = puVar8;
      puVar8 = PTR___ss5Int32VSesWP_100995c90;
      puVar6 = PTR___ss5Int32VN_100995c78;
      *(undefined **)(puVar11 + 0x70) = puVar9;
      *(undefined **)(puVar11 + 0x78) = puVar7;
      puVar9 = PTR___ss5Int64VN_100995cc0;
      puVar7 = PTR___ss5Int32VSEsWP_100995c80;
      *(undefined **)(puVar11 + 0x80) = puVar6;
      *(undefined **)(puVar11 + 0x88) = puVar8;
      puVar4 = PTR___ss5Int64VSesWP_100995cd8;
      puVar14 = PTR___ss5Int64VSEsWP_100995cc8;
      *(undefined **)(puVar11 + 0x90) = puVar7;
      *(undefined **)(puVar11 + 0x98) = puVar9;
      puVar8 = PTR___sSuSesWP_100995a68;
      puVar6 = PTR___sSuN_100995a50;
      *(undefined **)(puVar11 + 0xa0) = puVar4;
      *(undefined **)(puVar11 + 0xa8) = puVar14;
      puVar9 = PTR___ss5UInt8VN_100995d40;
      puVar7 = PTR___sSuSEsWP_100995a58;
      *(undefined **)(puVar11 + 0xb0) = puVar6;
      *(undefined **)(puVar11 + 0xb8) = puVar8;
      puVar8 = PTR___ss5UInt8VSesWP_100995d50;
      puVar6 = PTR___ss5UInt8VSEsWP_100995d48;
      *(undefined **)(puVar11 + 0xc0) = puVar7;
      *(undefined **)(puVar11 + 200) = puVar9;
      puVar9 = PTR___ss6UInt16VSesWP_100995da0;
      puVar7 = PTR___ss6UInt16VN_100995d90;
      *(undefined **)(puVar11 + 0xd0) = puVar8;
      *(undefined **)(puVar11 + 0xd8) = puVar6;
      puVar8 = PTR___ss6UInt32VN_100995dc0;
      puVar6 = PTR___ss6UInt16VSEsWP_100995d98;
      *(undefined **)(puVar11 + 0xe0) = puVar7;
      *(undefined **)(puVar11 + 0xe8) = puVar9;
      puVar9 = PTR___ss6UInt32VSesWP_100995dd8;
      puVar7 = PTR___ss6UInt32VSEsWP_100995dc8;
      *(undefined **)(puVar11 + 0xf0) = puVar6;
      *(undefined **)(puVar11 + 0xf8) = puVar8;
      puVar14 = PTR___ss6UInt64VSesWP_100995e28;
      puVar8 = PTR___ss6UInt64VN_100995e10;
      *(undefined **)(puVar11 + 0x100) = puVar9;
      *(undefined **)(puVar11 + 0x108) = puVar7;
      puVar9 = PTR___ss6UInt64VSEsWP_100995e18;
      puVar6 = PTR___sSdN_1009958f0;
      *(undefined **)(puVar11 + 0x110) = puVar8;
      *(undefined **)(puVar11 + 0x118) = puVar14;
      puVar8 = PTR___sSdSesWP_100995910;
      puVar7 = PTR___sSdSEsWP_100995900;
      *(undefined **)(puVar11 + 0x120) = puVar9;
      *(undefined **)(puVar11 + 0x128) = puVar6;
      puVar9 = PTR___sSSSesWP_100995828;
      puVar6 = PTR___sSSN_1009957f8;
      *(undefined **)(puVar11 + 0x130) = puVar8;
      *(undefined **)(puVar11 + 0x138) = puVar7;
      *(undefined **)(puVar11 + 0x140) = puVar6;
      *(undefined **)(puVar11 + 0x148) = puVar9;
      *(undefined **)(puVar11 + 0x150) = PTR___sSSSEsWP_100995800;
      puVar6 = &DAT_100ab9f10;
      FUN_100004bb4(&DAT_100ab9f10,&DAT_10084d570);
      puVar7 = &DAT_100ab9fe0;
      FUN_100690fa4(&DAT_100ab9fe0,FUN_100690f64,PTR___sSayxGSesSeRzlMc_1009958a0);
      puVar8 = &DAT_100ab9f18;
      FUN_100690fa4(&DAT_100ab9f18,FUN_1006904a8,PTR___sSayxGSEsSERzlMc_100995880);
      *(undefined **)(puVar11 + 0x158) = puVar6;
      *(undefined **)(puVar11 + 0x160) = puVar7;
      *(undefined **)(puVar11 + 0x168) = puVar8;
      puVar6 = &DAT_100ab9ef8;
      FUN_100004bb4(&DAT_100ab9ef8,&DAT_10084d568);
      puVar8 = &DAT_100ab9fd0;
      FUN_100690ee8(&DAT_100ab9fd0,FUN_100690f64,puVar9,PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790);
      puVar9 = &DAT_100ab9f00;
      FUN_100690ee8(&DAT_100ab9f00,FUN_1006904a8,PTR___sSSSEsWP_100995800,
                    PTR___sSDyxq_GSEsSERzSER_rlMc_100995780);
      uVar17 = 0;
      *(undefined **)(puVar11 + 0x170) = puVar6;
      *(undefined **)(puVar11 + 0x178) = puVar8;
      *(undefined **)(puVar11 + 0x180) = puVar9;
      lVar19 = 0x20;
      do {
        if (*(ulong *)(puVar11 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006904a8);
          (*pcVar5)();
        }
        lVar15 = *(long *)(puVar11 + lVar19);
        FUN_10007f314(&local_100,&local_e0,&DAT_100ab9ed0,&DAT_10084d550);
        if (local_c8 != (undefined *)0x0) {
          _swift_bridgeObjectRelease(puVar11);
          FUN_100040bb4(&local_e0,&DAT_100ab9ed0,&DAT_10084d550);
          goto LAB_100690204;
        }
        FUN_100040bb4(&local_e0,&DAT_100ab9ed0,&DAT_10084d550);
        lVar10 = lVar15;
        _swift_dynamicCastMetatype(lVar15,PTR___sSbN_1009958c8);
        uVar13 = uStack_80;
        puVar6 = local_88;
        if (lVar10 != 0) {
          FUN_10003f030(&local_a0,local_88);
          __ss28SingleValueDecodingContainerP6decodeyS2bmKFTj(puVar6,uVar13);
          FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
          local_100 = (undefined *)((ulong)puVar6 & 1);
          local_e8 = PTR___sSbN_1009958c8;
          goto LAB_10068fa64;
        }
        lVar10 = lVar15;
        _swift_dynamicCastMetatype(lVar15,PTR___sSiN_100995968);
        uVar13 = uStack_80;
        puVar6 = local_88;
        if (lVar10 != 0) {
          FUN_10003f030(&local_a0,local_88);
          __ss28SingleValueDecodingContainerP6decodeyS2imKFTj(puVar6,uVar13);
          puVar9 = PTR___sSiN_100995968;
          goto LAB_10068fc0c;
        }
        lVar10 = lVar15;
        _swift_dynamicCastMetatype(lVar15,PTR___ss4Int8VN_100995c20);
        uVar13 = uStack_80;
        puVar6 = local_88;
        if (lVar10 == 0) {
          lVar10 = lVar15;
          _swift_dynamicCastMetatype(lVar15,PTR___ss5Int32VN_100995c78);
          uVar13 = uStack_80;
          puVar6 = local_88;
          if (lVar10 != 0) {
            FUN_10003f030(&local_a0,local_88);
            __ss28SingleValueDecodingContainerP6decodeys5Int32VAEmKFTj(puVar6,uVar13);
            FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
            local_100 = (undefined *)((ulong)puVar6 & 0xffffffff);
            local_e8 = PTR___ss5Int32VN_100995c78;
            goto LAB_10068fa64;
          }
          lVar10 = lVar15;
          _swift_dynamicCastMetatype(lVar15,PTR___ss5Int64VN_100995cc0);
          uVar13 = uStack_80;
          puVar6 = local_88;
          if (lVar10 == 0) {
            lVar10 = lVar15;
            _swift_dynamicCastMetatype(lVar15,PTR___sSuN_100995a50);
            uVar13 = uStack_80;
            puVar6 = local_88;
            if (lVar10 != 0) {
              FUN_10003f030(&local_a0,local_88);
              __ss28SingleValueDecodingContainerP6decodeyS2umKFTj(puVar6,uVar13);
              puVar9 = PTR___sSuN_100995a50;
              goto LAB_10068fc0c;
            }
            lVar10 = lVar15;
            _swift_dynamicCastMetatype(lVar15,PTR___ss5UInt8VN_100995d40);
            uVar13 = uStack_80;
            puVar6 = local_88;
            if (lVar10 != 0) {
              FUN_10003f030(&local_a0,local_88);
              __ss28SingleValueDecodingContainerP6decodeys5UInt8VAEmKFTj(puVar6,uVar13);
              FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
              local_100 = (undefined *)((ulong)puVar6 & 0xff);
              local_e8 = PTR___ss5UInt8VN_100995d40;
              goto LAB_10068fa64;
            }
            lVar10 = lVar15;
            _swift_dynamicCastMetatype(lVar15,PTR___ss6UInt16VN_100995d90);
            uVar13 = uStack_80;
            puVar6 = local_88;
            if (lVar10 != 0) {
              FUN_10003f030(&local_a0,local_88);
              __ss28SingleValueDecodingContainerP6decodeys6UInt16VAEmKFTj(puVar6,uVar13);
              FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
              local_100 = (undefined *)((ulong)puVar6 & 0xffff);
              local_e8 = PTR___ss6UInt16VN_100995d90;
              goto LAB_10068fa64;
            }
            lVar10 = lVar15;
            _swift_dynamicCastMetatype(lVar15,PTR___ss6UInt32VN_100995dc0);
            uVar13 = uStack_80;
            puVar6 = local_88;
            if (lVar10 != 0) {
              FUN_10003f030(&local_a0,local_88);
              __ss28SingleValueDecodingContainerP6decodeys6UInt32VAEmKFTj(puVar6,uVar13);
              FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
              local_100 = (undefined *)((ulong)puVar6 & 0xffffffff);
              local_e8 = PTR___ss6UInt32VN_100995dc0;
              goto LAB_10068fa64;
            }
            lVar10 = lVar15;
            _swift_dynamicCastMetatype(lVar15,PTR___ss6UInt64VN_100995e10);
            uVar13 = uStack_80;
            puVar6 = local_88;
            if (lVar10 == 0) {
              lVar10 = lVar15;
              _swift_dynamicCastMetatype(lVar15,PTR___sSdN_1009958f0);
              uVar13 = uStack_80;
              puVar6 = local_88;
              if (lVar10 == 0) {
                lVar10 = lVar15;
                _swift_dynamicCastMetatype(lVar15,PTR___sSSN_1009957f8);
                uVar13 = uStack_80;
                puVar6 = local_88;
                if (lVar10 == 0) {
                  puVar6 = &DAT_100ab9f10;
                  FUN_100004bb4(&DAT_100ab9f10,&DAT_10084d570);
                  lVar10 = lVar15;
                  _swift_dynamicCastMetatype(lVar15,puVar6);
                  uVar13 = uStack_80;
                  puVar9 = local_88;
                  if (lVar10 == 0) {
                    puVar6 = &DAT_100ab9ef8;
                    FUN_100004bb4(&DAT_100ab9ef8,&DAT_10084d568);
                    _swift_dynamicCastMetatype(lVar15,puVar6);
                    uVar13 = uStack_80;
                    puVar9 = local_88;
                    puVar14 = puVar20;
                    if (lVar15 == 0) goto LAB_10068fa70;
                    FUN_10003f030(&local_a0,local_88);
                    puVar14 = puVar8;
                  }
                  else {
                    FUN_10003f030(&local_a0,local_88);
                    puVar14 = puVar7;
                  }
                  local_c8 = puVar6;
                  __ss28SingleValueDecodingContainerP6decodeyqd__qd__mKSeRd__lFTj
                            (&local_e0,puVar6,puVar6,puVar14,puVar9,uVar13);
                  FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
                  uStack_f8 = uStack_d8;
                  local_100 = local_e0;
                  local_e8 = local_c8;
                  local_f0 = local_d0;
                  puVar14 = local_e0;
                }
                else {
                  FUN_10003f030(&local_a0,local_88);
                  __ss28SingleValueDecodingContainerP6decodeyS2SmKFTj();
                  puVar9 = PTR___sSSN_1009957f8;
                  FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
                  local_f0 = 0;
                  puVar14 = puVar20;
                  local_100 = puVar6;
                  uStack_f8 = uVar13;
                  local_e8 = puVar9;
                }
              }
              else {
                FUN_10003f030(&local_a0,local_88);
                __ss28SingleValueDecodingContainerP6decodeyS2dmKFTj(puVar6,uVar13);
                puVar6 = PTR___sSdN_1009958f0;
                puVar14 = puVar20;
                FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
                *puVar16 = 0;
                puVar16[1] = 0;
                local_100 = puVar20;
                local_e8 = puVar6;
              }
            }
            else {
              FUN_10003f030(&local_a0,local_88);
              __ss28SingleValueDecodingContainerP6decodeys6UInt64VAEmKFTj(puVar6,uVar13);
              puVar9 = PTR___ss6UInt64VN_100995e10;
              FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
              *puVar16 = 0;
              puVar16[1] = 0;
              puVar14 = puVar20;
              local_100 = puVar6;
              local_e8 = puVar9;
            }
          }
          else {
            FUN_10003f030(&local_a0,local_88);
            __ss28SingleValueDecodingContainerP6decodeys5Int64VAEmKFTj(puVar6,uVar13);
            puVar9 = PTR___ss5Int64VN_100995cc0;
LAB_10068fc0c:
            FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar14 = puVar20;
            local_100 = puVar6;
            local_e8 = puVar9;
          }
        }
        else {
          FUN_10003f030(&local_a0,local_88);
          __ss28SingleValueDecodingContainerP6decodeys4Int8VAEmKFTj(puVar6,uVar13);
          FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
          local_100 = (undefined *)((ulong)puVar6 & 0xff);
          local_e8 = PTR___ss4Int8VN_100995c20;
LAB_10068fa64:
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar14 = puVar20;
        }
LAB_10068fa70:
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 0x18;
        puVar20 = puVar14;
      } while (uVar17 != 0xf);
      _swift_bridgeObjectRelease(puVar11);
LAB_100690204:
      FUN_10003f094(&local_a0);
    }
    else {
      FUN_10003f094(&local_a0);
    }
  }
  else {
    _swift_errorRelease();
    uStack_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_d0 = 0;
    FUN_100040bb4(&local_e0,&DAT_100ab9fc8,&DAT_10084dd68);
  }
  FUN_10007f314(&local_100,&local_a0,&DAT_100ab9ed0,&DAT_10084d550);
  if (local_88 == (undefined *)0x0) {
    puVar11 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar12 = _objc_msgSend((ID)puVar11,"init");
    uVar13 = 0;
    FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
    local_120[0] = IVar12;
    local_108 = uVar13;
    if (local_88 != (undefined *)0x0) {
      FUN_100040bb4(&local_a0,&DAT_100ab9ed0,&DAT_10084d550);
    }
  }
  else {
    FUN_10007f3d4(&local_a0,local_120);
  }
  FUN_10003e8bc(local_120,auStack_140);
  puVar16 = &local_150;
  _swift_dynamicCast(puVar16,auStack_140,PTR___sypN_100995e88 + 8,
                     PTR___s10Foundation4DataVN_1009961e8,0);
  if ((int)puVar16 == 0) {
    FUN_10003e8bc(local_120,&local_e0);
    FUN_10068e2dc(&local_a0,&local_e0);
    FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
    FUN_10003f094(local_120);
    uStack_178 = uStack_80;
    local_180 = local_88;
    uVar13 = local_78;
    uVar18 = local_90;
    puVar11 = local_a0;
    uVar21 = uStack_98;
    uVar1 = local_6e;
    uVar2 = local_6f;
    uVar3 = local_70;
  }
  else {
    FUN_100008184(local_150,uStack_148);
    FUN_10068e3b8(&local_e0,local_150,uStack_148,0);
    FUN_100006cdc(local_150,uStack_148);
    FUN_100006cdc(local_150,uStack_148);
    FUN_100040bb4(&local_100,&DAT_100ab9ed0,&DAT_10084d550);
    FUN_10003f094(local_120);
    uStack_178 = uStack_c0;
    local_180 = local_c8;
    uVar13 = local_b8;
    uVar18 = local_d0;
    puVar11 = local_e0;
    uVar21 = uStack_d8;
    uVar1 = local_ae;
    uVar2 = local_af;
    uVar3 = local_b0;
  }
  FUN_10003f094(auStack_140);
  FUN_10003f094(param_2);
  param_1[1] = uVar21;
  *param_1 = puVar11;
  param_1[2] = uVar18;
  param_1[4] = uStack_178;
  param_1[3] = local_180;
  param_1[5] = uVar13;
  *(undefined1 *)(param_1 + 6) = uVar3;
  *(undefined1 *)((long)param_1 + 0x31) = uVar2;
  *(undefined1 *)((long)param_1 + 0x32) = uVar1;
  return;
}

