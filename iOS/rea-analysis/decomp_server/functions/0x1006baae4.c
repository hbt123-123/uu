// rea decompile_all
// name: FUN_1006baae4
// address: 0x1006baae4
// body: available
// range: 0x1006baae4-0x1006bb01f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006baae4(ulong param_1,long *param_2,long *param_3,int param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 uVar14;
  void *pvVar15;
  void *pvVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  void *pvVar21;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90 [2];
  undefined8 uStack_7c;
  
  uVar5 = param_2[1];
  uVar20 = param_2[2];
  if (uVar5 < uVar20) {
    return 0xffffffffffffffff;
  }
  uVar18 = param_3[1];
  uVar6 = param_3[2];
  if (uVar18 < uVar6) {
    return 0xffffffffffffffff;
  }
  iVar7 = *(int *)(param_1 + 0x428);
  if (iVar7 == 0) {
    uStack_d8 = *(undefined8 *)(param_1 + 0x78);
    local_e0 = *(undefined8 *)(param_1 + 0x70);
    uStack_c8 = *(undefined8 *)(param_1 + 0x88);
    uStack_d0 = *(undefined8 *)(param_1 + 0x80);
    uStack_b8 = *(undefined8 *)(param_1 + 0x98);
    local_c0 = *(undefined8 *)(param_1 + 0x90);
    uStack_118 = *(undefined8 *)(param_1 + 0x38);
    local_120 = *(undefined8 *)(param_1 + 0x30);
    uStack_108 = *(undefined8 *)(param_1 + 0x48);
    uStack_110 = *(undefined8 *)(param_1 + 0x40);
    uStack_f8 = *(undefined8 *)(param_1 + 0x58);
    local_100 = *(undefined8 *)(param_1 + 0x50);
    uStack_e8 = *(undefined8 *)(param_1 + 0x68);
    uStack_f0 = *(undefined8 *)(param_1 + 0x60);
    uStack_138 = *(undefined8 *)(param_1 + 0x18);
    local_140 = *(undefined8 *)(param_1 + 0x10);
    uStack_128 = *(undefined8 *)(param_1 + 0x28);
    uStack_130 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x460);
    uVar14 = *(undefined8 *)(param_1 + 0x468);
    uVar2 = *(undefined4 *)(param_1 + 0x470);
    uVar17 = *(undefined8 *)(param_1 + 0x440);
    FUN_1006b7620(&local_1d0,param_1 + 0x10,0,uVar17);
    lVar4 = *(long *)(param_1 + 0x438);
    if ((lVar4 != 0) && (*(long *)(param_1 + 0x450) == 0)) {
      local_90[0] = CONCAT44(uStack_1cc,local_1d0);
      uStack_7c = CONCAT44(uStack_1b8,uStack_1bc);
      uStack_a8 = *(undefined8 *)(param_1 + 0x1f8);
      local_b0 = *(undefined8 *)(param_1 + 0x1f0);
      local_a0 = *(undefined8 *)(param_1 + 0x200);
      FUN_1006b9960(lVar4,uVar17,1,*(undefined4 *)(param_1 + 0x448),local_90,&local_b0);
      *(long *)(param_1 + 0x450) = lVar4;
      if (lVar4 == 0) {
        return 0xffffffffffffffc0;
      }
      *(long *)(param_1 + 0x458) = lVar4;
    }
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    if (param_4 == 2) {
      lVar4 = param_3[1];
      *(long *)(param_1 + 0x180) = lVar4 + 1;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x180) + -1;
    }
    FUN_1006b7620((ulong)&local_140 | 4,param_1 + 0x10,lVar4,0);
    uVar17 = *(undefined8 *)(param_1 + 0x458);
    uStack_168 = uStack_d8;
    local_170 = local_e0;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    local_150 = local_c0;
    uStack_1a8 = uStack_118;
    local_1b0 = local_120;
    uStack_198 = uStack_108;
    uStack_1a0 = uStack_110;
    uStack_188 = uStack_f8;
    local_190 = local_100;
    uStack_178 = uStack_e8;
    uStack_180 = uStack_f0;
    uStack_1c8 = (undefined4)uStack_138;
    uStack_1c4 = (undefined4)((ulong)uStack_138 >> 0x20);
    local_1d0 = (undefined4)local_140;
    uStack_1cc = (undefined4)((ulong)local_140 >> 0x20);
    uStack_1b8 = (undefined4)uStack_128;
    uStack_1b4 = (undefined4)((ulong)uStack_128 >> 0x20);
    local_1c0 = (undefined4)uStack_130;
    uStack_1bc = (undefined4)((ulong)uStack_130 >> 0x20);
    FUN_1006b7620(local_90,&local_1d0,lVar4,uVar14);
    uStack_1cc = (undefined4)local_90[0];
    uStack_1c8 = (undefined4)((ulong)local_90[0] >> 0x20);
    uStack_1b8 = (undefined4)uStack_7c;
    uStack_1b4 = (undefined4)((ulong)uStack_7c >> 0x20);
    uVar5 = param_1;
    FUN_1006b8804(param_1,uVar12,uVar14,uVar2,0,uVar17,&local_1d0,lVar4,1);
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    lVar8 = *(long *)(param_1 + 0x178);
    if (lVar8 == lVar4) {
      lVar8 = lVar8 + 1;
    }
    *(long *)(param_1 + 0x400) = lVar8;
    *(undefined8 *)(param_1 + 0x420) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x428) = 1;
    uVar18 = param_3[1];
    uVar6 = param_3[2];
    uVar5 = param_2[1];
    uVar20 = param_2[2];
    iVar7 = 1;
  }
  lVar11 = *param_3;
  pvVar1 = (void *)(lVar11 + uVar18);
  pvVar15 = (void *)(lVar11 + uVar6);
  lVar8 = *param_2;
  lVar4 = lVar8 + uVar5;
  pvVar13 = (void *)(lVar8 + uVar20);
  do {
    do {
      while( true ) {
        if (iVar7 == 0) {
          return 0xffffffffffffffc2;
        }
        if (iVar7 != 1) break;
        pvVar21 = pvVar1;
        if (param_4 == 2) {
          uVar20 = (long)pvVar1 - (long)pvVar15;
          uVar5 = 0x20000 - uVar20 >> 0xb;
          if (0x1ffff < uVar20) {
            uVar5 = 0;
          }
          lVar9 = *(long *)(param_1 + 0x3f8);
          if ((ulong)(lVar4 - (long)pvVar13) < uVar20 + (uVar20 >> 8) + uVar5 || lVar9 != 0) {
            sVar10 = *(long *)(param_1 + 0x400) - lVar9;
            if (uVar20 <= sVar10) {
              sVar10 = uVar20;
            }
            goto joined_r0x0001006bade8;
          }
          uVar5 = param_1;
          FUN_1006b9090(param_1,pvVar13,lVar4 - (long)pvVar13,pvVar15);
          if (0xffffffffffffff88 < uVar5) {
            return uVar5;
          }
          pvVar13 = (void *)((long)pvVar13 + uVar5);
          *(undefined4 *)(param_1 + 0x42c) = 1;
          goto LAB_1006bafc0;
        }
        lVar9 = *(long *)(param_1 + 0x3f8);
        sVar10 = *(long *)(param_1 + 0x400) - lVar9;
        if ((ulong)((long)pvVar1 - (long)pvVar15) <= sVar10) {
          sVar10 = (long)pvVar1 - (long)pvVar15;
        }
joined_r0x0001006bade8:
        if (sVar10 != 0) {
          _memcpy((void *)(*(long *)(param_1 + 0x3e0) + lVar9),pvVar15,sVar10);
          lVar9 = *(long *)(param_1 + 0x3f8);
        }
        uVar5 = lVar9 + sVar10;
        *(ulong *)(param_1 + 0x3f8) = uVar5;
        pvVar15 = (void *)((long)pvVar15 + sVar10);
        if (param_4 == 1) {
          if (uVar5 != *(ulong *)(param_1 + 0x3f0)) goto LAB_1006bae58;
LAB_1006baf74:
          iVar7 = *(int *)(param_1 + 0x42c);
          param_3[2] = (long)pvVar15 - lVar11;
          param_2[2] = (long)pvVar13 - lVar8;
          if (iVar7 == 0) {
            uVar5 = *(long *)(param_1 + 0x400) - *(long *)(param_1 + 0x3f8);
            if (uVar5 == 0) {
              uVar5 = *(ulong *)(param_1 + 0x178);
            }
            if (0xffffffffffffff88 < uVar5) {
              return uVar5;
            }
          }
          goto LAB_1006bafe0;
        }
        if ((param_4 == 0) && (uVar5 < *(ulong *)(param_1 + 0x400))) goto LAB_1006baf74;
LAB_1006bae58:
        uVar18 = lVar4 - (long)pvVar13;
        bVar3 = param_4 == 2 && pvVar15 == pvVar1;
        uVar5 = uVar5 - *(long *)(param_1 + 0x3f0);
        uVar20 = 0x20000 - uVar5 >> 0xb;
        if (0x1ffff < uVar5) {
          uVar20 = 0;
        }
        uVar6 = uVar18;
        pvVar16 = pvVar13;
        if (uVar18 < uVar5 + (uVar5 >> 8) + uVar20) {
          pvVar16 = *(void **)(param_1 + 0x408);
          uVar6 = *(ulong *)(param_1 + 0x410);
        }
        uVar19 = (uint)bVar3;
        uVar20 = param_1;
        if (uVar19 == 0) {
          FUN_1006b8330(param_1,pvVar16,uVar6,
                        *(long *)(param_1 + 0x3e0) + *(long *)(param_1 + 0x3f0),uVar5,1,0);
        }
        else {
          FUN_1006b9090();
        }
        if (0xffffffffffffff88 < uVar20) {
          return uVar20;
        }
        *(uint *)(param_1 + 0x42c) = uVar19;
        lVar9 = *(long *)(param_1 + 0x3f8);
        uVar5 = *(long *)(param_1 + 0x178) + lVar9;
        *(ulong *)(param_1 + 0x400) = uVar5;
        if (*(ulong *)(param_1 + 1000) < uVar5) {
          lVar9 = 0;
          *(undefined8 *)(param_1 + 0x3f8) = 0;
          *(long *)(param_1 + 0x400) = *(long *)(param_1 + 0x178);
        }
        *(long *)(param_1 + 0x3f0) = lVar9;
        if (pvVar16 != pvVar13) {
          lVar9 = 0;
          *(ulong *)(param_1 + 0x418) = uVar20;
          *(undefined8 *)(param_1 + 0x420) = 0;
          *(undefined4 *)(param_1 + 0x428) = 2;
          sVar10 = uVar18;
          if (uVar20 <= uVar18) {
            sVar10 = uVar20;
          }
          goto joined_r0x0001006baf34;
        }
        pvVar13 = (void *)((long)pvVar13 + uVar20);
        if (bVar3) goto LAB_1006bafc0;
        iVar7 = *(int *)(param_1 + 0x428);
      }
    } while (iVar7 != 2);
    lVar9 = *(long *)(param_1 + 0x420);
    uVar18 = lVar4 - (long)pvVar13;
    uVar20 = *(long *)(param_1 + 0x418) - lVar9;
    sVar10 = uVar18;
    if (uVar20 <= uVar18) {
      sVar10 = uVar20;
    }
joined_r0x0001006baf34:
    if (sVar10 != 0) {
      _memcpy(pvVar13,(void *)(*(long *)(param_1 + 0x408) + lVar9),sVar10);
      lVar9 = *(long *)(param_1 + 0x420);
    }
    pvVar13 = (void *)((long)pvVar13 + sVar10);
    *(size_t *)(param_1 + 0x420) = lVar9 + sVar10;
    if (uVar18 < uVar20) goto LAB_1006baf74;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    pvVar21 = pvVar15;
    if (*(int *)(param_1 + 0x42c) != 0) {
LAB_1006bafc0:
      *(undefined4 *)(param_1 + 0x428) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      param_3[2] = (long)pvVar21 - lVar11;
      param_2[2] = (long)pvVar13 - lVar8;
LAB_1006bafe0:
      return *(long *)(param_1 + 0x418) - *(long *)(param_1 + 0x420);
    }
    iVar7 = 1;
    *(undefined4 *)(param_1 + 0x428) = 1;
  } while( true );
}

