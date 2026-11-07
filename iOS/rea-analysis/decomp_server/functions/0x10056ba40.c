// rea decompile_all
// name: FUN_10056ba40
// address: 0x10056ba40
// body: available
// range: 0x10056ba40-0x10056d13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056d13c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10056ba40(long param_1,long param_2)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  code *pcVar26;
  bool bVar27;
  ulong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong uVar34;
  byte *pbVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong *puVar47;
  uint uVar48;
  long lVar49;
  byte bVar50;
  uint uVar51;
  long lVar52;
  long lVar53;
  int iVar54;
  long lVar55;
  int iVar56;
  ulong *puVar57;
  byte local_dc;
  byte local_c9 [9];
  byte local_c0 [14];
  undefined2 uStack_b2;
  ulong local_b0;
  byte local_a8;
  double local_a0;
  ulong uStack_98;
  ulong local_90;
  byte local_88;
  long local_80;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar49 = *(long *)(param_1 + 0x10);
  if (lVar49 == *(long *)(param_2 + 0x10)) {
    if ((lVar49 != 0) && (param_1 != param_2)) {
      puVar57 = (ulong *)(param_2 + 0x48);
      puVar47 = (ulong *)(param_1 + 0x48);
      do {
        bVar24 = local_c0[0xd];
        bVar22 = local_c0[0xc];
        bVar20 = local_c0[0xb];
        bVar18 = local_c0[10];
        bVar16 = local_c0[9];
        bVar14 = local_c0[8];
        if (lVar49 == 0) {
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0dc);
          (*pcVar26)();
        }
        dVar1 = (double)puVar47[-5];
        uVar4 = puVar47[-4];
        uVar41 = puVar47[-3];
        local_dc = (byte)puVar47[-2];
        uVar36 = (uint)local_dc;
        uVar28 = puVar47[-1];
        uVar34 = *puVar47;
        dVar2 = (double)puVar57[-5];
        uVar5 = puVar57[-4];
        uVar44 = puVar57[-3];
        bVar50 = (byte)puVar57[-2];
        uVar3 = puVar57[-1];
        uVar6 = *puVar57;
        bVar27 = ((uVar44 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        uVar51 = (uint)bVar50;
        local_c0[8] = (byte)uVar4;
        bVar15 = local_c0[8];
        local_c0[9] = (byte)(uVar4 >> 8);
        bVar17 = local_c0[9];
        local_c0[10] = (byte)(uVar4 >> 0x10);
        bVar19 = local_c0[10];
        local_c0[0xb] = (byte)(uVar4 >> 0x18);
        bVar21 = local_c0[0xb];
        local_c0[0xc] = (byte)(uVar4 >> 0x20);
        bVar23 = local_c0[0xc];
        local_c0[0xd] = (byte)(uVar4 >> 0x28);
        bVar25 = local_c0[0xd];
        if ((((uVar41 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar36 == 0xff)) {
          if (bVar27 && uVar51 == 0xff) {
            local_c0[8] = bVar14;
            local_c0[9] = bVar16;
            local_c0[10] = bVar18;
            local_c0[0xb] = bVar20;
            local_c0[0xc] = bVar22;
            local_c0[0xd] = bVar24;
            FUN_10051fe90(dVar1,uVar4,uVar41,0xff);
            FUN_100008184(uVar28,uVar34);
            FUN_10051fe90(dVar2,uVar5,uVar44,0xff);
            FUN_100008184(uVar3,uVar6);
            FUN_10051fe90(dVar1,uVar4,uVar41,0xff);
            FUN_10051fe90(dVar2,uVar5,uVar44,0xff);
            uVar48 = 0xff;
            goto LAB_10056bc04;
          }
          local_dc = 0xff;
LAB_10056ce08:
          local_c0[0] = SUB81(dVar1,0);
          local_c0[1] = (byte)((ulong)dVar1 >> 8);
          local_c0[2] = (byte)((ulong)dVar1 >> 0x10);
          local_c0[3] = (byte)((ulong)dVar1 >> 0x18);
          local_c0[4] = (byte)((ulong)dVar1 >> 0x20);
          local_c0[5] = (byte)((ulong)dVar1 >> 0x28);
          local_c0[6] = (byte)((ulong)dVar1 >> 0x30);
          local_c0[7] = (byte)((ulong)dVar1 >> 0x38);
          uStack_b2 = (undefined2)(uVar4 >> 0x30);
          local_a8 = local_dc;
          local_b0 = uVar41;
          local_a0 = dVar2;
          uStack_98 = uVar5;
          local_90 = uVar44;
          local_88 = bVar50;
          FUN_10051fe90(dVar1,uVar4,uVar41);
          FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
          FUN_100040bb4(local_c0,&DAT_100aad008,&DAT_10083cbe8);
          goto LAB_10056d098;
        }
        if (bVar27 && uVar51 == 0xff) {
          bVar50 = 0xff;
          goto LAB_10056ce08;
        }
        uVar37 = (uint)(uVar41 >> 0x20);
        uVar38 = uVar37 >> 0x1c & 3 | (uVar36 & 1) << 2;
        uVar43 = (uint)(uVar44 >> 0x20);
        uVar48 = uVar36;
        if (2 < uVar38) {
          if (uVar38 == 3) {
            if ((uVar43 >> 0x1c & 3 | (uVar51 & 1) << 2) != 3) goto LAB_10056ce64;
            local_c0[8] = bVar14;
            local_c0[9] = bVar16;
            local_c0[10] = bVar18;
            local_c0[0xb] = bVar20;
            local_c0[0xc] = bVar22;
            local_c0[0xd] = bVar24;
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_100008184(uVar28,uVar34);
            FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
            FUN_100008184(uVar3,uVar6);
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
            if (((SUB84(dVar2,0) ^ SUB84(dVar1,0)) & 1) == 0) goto LAB_10056bc04;
LAB_10056cef8:
            FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
            FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
            FUN_100006cdc(uVar3,uVar6);
          }
          else {
            iVar54 = (int)uVar5;
            iVar40 = (int)(uVar5 >> 0x20);
            uVar7 = (undefined1)(uVar41 >> 8);
            uVar8 = (undefined1)(uVar41 >> 0x10);
            uVar9 = (undefined1)(uVar41 >> 0x18);
            uVar10 = (undefined1)(uVar41 >> 0x20);
            uVar11 = (undefined1)(uVar41 >> 0x28);
            uVar12 = (undefined1)(uVar4 >> 0x30);
            uVar13 = (undefined1)(uVar4 >> 0x38);
            iVar56 = (int)uVar4;
            iVar39 = (int)(uVar4 >> 0x20);
            lVar55 = (long)uVar4 >> 0x20;
            if (uVar38 == 4) {
              if ((uVar43 >> 0x1c & 3 | (uVar51 & 1) << 2) != 4) goto LAB_10056ce64;
              local_c0[8] = bVar14;
              local_c0[9] = bVar16;
              local_c0[10] = bVar18;
              local_c0[0xb] = bVar20;
              local_c0[0xc] = bVar22;
              local_c0[0xd] = bVar24;
              FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
              FUN_100008184(uVar28,uVar34);
              FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
              FUN_100008184(uVar3,uVar6);
              FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
              FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
              dVar31 = dVar1;
              FUN_1005b776c(dVar1,dVar2);
              if (((ulong)dVar31 & 1) == 0) goto LAB_10056cee4;
              uVar38 = uVar37 >> 0x1e;
              if (uVar41 >> 0x3e == 3) {
                uVar42 = 0;
                if ((((uVar4 != 0) || (uVar41 != 0xc000000000000000)) || (uVar44 >> 0x3e < 3)) ||
                   ((uVar42 = 0, uVar5 != 0 || (uVar44 != 0xc000000000000000)))) goto LAB_10056c74c;
                uVar45 = 0;
                uVar32 = 0xc000000000000000;
              }
              else {
                if (uVar37 >> 0x1e < 2) {
                  if (uVar38 == 0) {
                    uVar42 = uVar41 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar39,iVar56)) {
                    /* WARNING: Does not return */
                      pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d11c);
                      (*pcVar26)();
                    }
                    uVar42 = (ulong)(iVar39 - iVar56);
                  }
                }
                else if (uVar38 == 2) {
                  uVar42 = *(long *)(uVar4 + 0x18) - *(long *)(uVar4 + 0x10);
                  if (SBORROW8(*(long *)(uVar4 + 0x18),*(long *)(uVar4 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d114);
                    (*pcVar26)();
                  }
                }
                else {
                  uVar42 = 0;
                }
LAB_10056c74c:
                uVar45 = uVar5;
                uVar32 = uVar44;
                if (uVar43 >> 0x1e < 2) {
                  if (uVar43 >> 0x1e == 0) {
                    uVar46 = uVar44 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar40,iVar54)) {
                    /* WARNING: Does not return */
                      pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d104);
                      (*pcVar26)();
                    }
                    uVar46 = (ulong)(iVar40 - iVar54);
                  }
                }
                else {
                  if (uVar43 >> 0x1e != 2) {
                    if (uVar42 != 0) goto LAB_10056cee4;
                    goto LAB_10056c8a4;
                  }
                  uVar46 = *(long *)(uVar5 + 0x18) - *(long *)(uVar5 + 0x10);
                  if (SBORROW8(*(long *)(uVar5 + 0x18),*(long *)(uVar5 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d10c);
                    (*pcVar26)();
                  }
                }
                if (uVar42 != uVar46) goto LAB_10056cee4;
                if (0 < (long)uVar42) {
                  if (uVar38 < 2) {
                    if (uVar38 == 0) {
                      local_c0[0] = bVar15;
                      local_c0[1] = bVar17;
                      local_c0[2] = bVar19;
                      local_c0[3] = bVar21;
                      local_c0[4] = bVar23;
                      local_c0[5] = bVar25;
                      local_c0[6] = uVar12;
                      local_c0[7] = uVar13;
                      local_c0[8] = (byte)uVar41;
                      local_c0[9] = uVar7;
                      local_c0[10] = uVar8;
                      local_c0[0xb] = uVar9;
                      local_c0[0xc] = uVar10;
                      local_c0[0xd] = uVar11;
                      FUN_100008184(uVar5,uVar44);
                      FUN_100009038(local_c9,local_c0,local_c0 + (uVar41 >> 0x30 & 0xff),uVar5,
                                    uVar44);
                      FUN_100006cdc(uVar5,uVar44);
                      FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
                      bVar14 = local_c9[0];
                    }
                    else {
                      lVar53 = (long)iVar56;
                      if (lVar55 < lVar53) {
                    /* WARNING: Does not return */
                        pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d120);
                        (*pcVar26)();
                      }
                      uVar42 = uVar5;
                      FUN_100008184(uVar5,uVar44);
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      uVar45 = uVar42;
                      if (uVar42 != 0) {
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar53,uVar45)) {
                    /* WARNING: Does not return */
                          pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d138);
                          (*pcVar26)();
                        }
                        uVar42 = (lVar53 - uVar45) + uVar42;
                      }
                      __s10Foundation13__DataStorageC7_lengthSivg(uVar41);
                      if (lVar55 - lVar53 <= (long)uVar45) {
                        uVar45 = lVar55 - lVar53;
                      }
                      lVar55 = 0;
                      if (uVar42 != 0) {
                        lVar55 = uVar45 + uVar42;
                      }
                      FUN_100009038(local_c0,uVar42,lVar55,uVar5,uVar44);
                      FUN_100006cdc(uVar5,uVar44);
                      FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
                      bVar14 = local_c0[0];
                    }
                  }
                  else if (uVar38 == 2) {
                    lVar55 = *(long *)(uVar4 + 0x10);
                    lVar53 = *(long *)(uVar4 + 0x18);
                    uVar42 = uVar5;
                    FUN_100008184(uVar5,uVar44);
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    if (uVar42 == 0) {
                      lVar52 = 0;
                    }
                    else {
                      uVar45 = uVar42;
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar55,uVar45)) {
                    /* WARNING: Does not return */
                        pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d130);
                        (*pcVar26)();
                      }
                      lVar52 = (lVar55 - uVar45) + uVar42;
                      uVar42 = uVar45;
                    }
                    uVar45 = lVar53 - lVar55;
                    if (SBORROW8(lVar53,lVar55)) {
                    /* WARNING: Does not return */
                      pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d12c);
                      (*pcVar26)();
                    }
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if ((long)uVar45 <= (long)uVar42) {
                      uVar42 = uVar45;
                    }
                    lVar55 = 0;
                    if (lVar52 != 0) {
                      lVar55 = uVar42 + lVar52;
                    }
                    FUN_100009038(local_c0,lVar52,lVar55,uVar5,uVar44);
                    FUN_100006cdc(uVar5,uVar44);
                    FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
                    bVar14 = local_c0[0];
                  }
                  else {
                    local_c0[8] = 0;
                    local_c0[9] = 0;
                    local_c0[10] = 0;
                    local_c0[0xb] = 0;
                    local_c0[0xc] = 0;
                    local_c0[0xd] = 0;
                    local_c0[0] = 0;
                    local_c0[1] = 0;
                    local_c0[2] = 0;
                    local_c0[3] = 0;
                    local_c0[4] = 0;
                    local_c0[5] = 0;
                    local_c0[6] = 0;
                    local_c0[7] = 0;
                    FUN_100008184(uVar5,uVar44);
                    FUN_100009038(local_c9,local_c0,local_c0,uVar5,uVar44);
                    FUN_100006cdc(uVar5,uVar44);
                    FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
                    bVar14 = local_c9[0];
                  }
                  if ((bVar14 & 1) != 0) goto LAB_10056bc04;
                  goto LAB_10056cef8;
                }
              }
LAB_10056c8a4:
              FUN_10051ff3c(dVar2,uVar45,uVar32,bVar50);
              goto LAB_10056bc04;
            }
            if ((uVar43 >> 0x1c & 3 | (bVar50 & 1) << 2) != 5) {
              local_c0[8] = bVar14;
              local_c0[9] = bVar16;
              local_c0[10] = bVar18;
              local_c0[0xb] = bVar20;
              local_c0[0xc] = bVar22;
              local_c0[0xd] = bVar24;
              FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
              FUN_100008184(uVar28,uVar34);
              FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
              FUN_100008184(uVar3,uVar6);
              FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
              FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
              FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
              FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
              FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
              FUN_100006cdc(uVar3,uVar6);
              goto LAB_10056d088;
            }
            local_c0[8] = bVar14;
            local_c0[9] = bVar16;
            local_c0[10] = bVar18;
            local_c0[0xb] = bVar20;
            local_c0[0xc] = bVar22;
            local_c0[0xd] = bVar24;
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_100008184(uVar28,uVar34);
            FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
            FUN_100008184(uVar3,uVar6);
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
            dVar31 = dVar1;
            FUN_10056ba40(dVar1,dVar2);
            if (((ulong)dVar31 & 1) == 0) {
LAB_10056cf48:
              FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
            }
            else {
              uVar42 = uVar44 & 0xcfffffffffffffff;
              uVar38 = uVar37 >> 0x1e;
              if (uVar41 >> 0x3e == 3) {
                uVar45 = 0;
                if (((uVar4 != 0) || ((uVar41 & 0xcfffffffffffffff) != 0xc000000000000000)) ||
                   ((uVar44 >> 0x3e < 3 ||
                    ((uVar45 = 0, uVar5 != 0 || (uVar32 = 0, uVar42 != 0xc000000000000000))))))
                goto LAB_10056c904;
LAB_10056ca00:
                FUN_10051ff3c(dVar2,uVar32,uVar44,bVar50);
                goto LAB_10056bc04;
              }
              if (uVar37 >> 0x1e < 2) {
                if (uVar38 == 0) {
                  uVar45 = uVar41 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar39,iVar56)) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d110);
                    (*pcVar26)();
                  }
                  uVar45 = (ulong)(iVar39 - iVar56);
                }
              }
              else if (uVar38 == 2) {
                uVar45 = *(long *)(uVar4 + 0x18) - *(long *)(uVar4 + 0x10);
                if (SBORROW8(*(long *)(uVar4 + 0x18),*(long *)(uVar4 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d118);
                  (*pcVar26)();
                }
              }
              else {
                uVar45 = 0;
              }
LAB_10056c904:
              uVar32 = uVar5;
              if (uVar43 >> 0x1e < 2) {
                if (uVar43 >> 0x1e == 0) {
                  uVar46 = uVar44 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar40,iVar54)) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d108);
                    (*pcVar26)();
                  }
                  uVar46 = (ulong)(iVar40 - iVar54);
                }
              }
              else {
                if (uVar43 >> 0x1e != 2) {
                  if (uVar45 != 0) goto LAB_10056cf48;
                  goto LAB_10056ca00;
                }
                uVar46 = *(long *)(uVar5 + 0x18) - *(long *)(uVar5 + 0x10);
                if (SBORROW8(*(long *)(uVar5 + 0x18),*(long *)(uVar5 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d100);
                  (*pcVar26)();
                }
              }
              if (uVar45 != uVar46) goto LAB_10056cf48;
              if ((long)uVar45 < 1) goto LAB_10056ca00;
              if (uVar38 < 2) {
                if (uVar38 == 0) {
                  pbVar35 = local_c0 + (uVar41 >> 0x30 & 0xff);
                  local_c0[0] = bVar15;
                  local_c0[1] = bVar17;
                  local_c0[2] = bVar19;
                  local_c0[3] = bVar21;
                  local_c0[4] = bVar23;
                  local_c0[5] = bVar25;
                  local_c0[6] = uVar12;
                  local_c0[7] = uVar13;
                  local_c0[8] = (byte)uVar41;
                  local_c0[9] = uVar7;
                  local_c0[10] = uVar8;
                  local_c0[0xb] = uVar9;
                  local_c0[0xc] = uVar10;
                  local_c0[0xd] = uVar11;
                  FUN_100008184(uVar5,uVar42);
                  goto LAB_10056cc70;
                }
                lVar53 = (long)iVar56;
                if (lVar55 < lVar53) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d124);
                  (*pcVar26)();
                }
                uVar45 = uVar5;
                FUN_100008184(uVar5,uVar42);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar32 = uVar45;
                if (uVar45 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar53,uVar32)) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d13c);
                    (*pcVar26)();
                  }
                  uVar45 = (lVar53 - uVar32) + uVar45;
                }
                __s10Foundation13__DataStorageC7_lengthSivg(uVar41);
                if (lVar55 - lVar53 <= (long)uVar32) {
                  uVar32 = lVar55 - lVar53;
                }
                lVar55 = 0;
                if (uVar45 != 0) {
                  lVar55 = uVar32 + uVar45;
                }
                FUN_100009038(local_c0,uVar45,lVar55,uVar5,uVar42);
                FUN_100006cdc(uVar5,uVar42);
                FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
                bVar14 = local_c0[0];
              }
              else if (uVar38 == 2) {
                lVar55 = *(long *)(uVar4 + 0x10);
                lVar53 = *(long *)(uVar4 + 0x18);
                uVar45 = uVar5;
                FUN_100008184(uVar5,uVar42);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (uVar45 == 0) {
                  lVar52 = 0;
                }
                else {
                  uVar32 = uVar45;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar55,uVar32)) {
                    /* WARNING: Does not return */
                    pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d134);
                    (*pcVar26)();
                  }
                  lVar52 = (lVar55 - uVar32) + uVar45;
                  uVar45 = uVar32;
                }
                uVar32 = lVar53 - lVar55;
                if (SBORROW8(lVar53,lVar55)) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d128);
                  (*pcVar26)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar32 <= (long)uVar45) {
                  uVar45 = uVar32;
                }
                lVar55 = 0;
                if (lVar52 != 0) {
                  lVar55 = uVar45 + lVar52;
                }
                FUN_100009038(local_c0,lVar52,lVar55,uVar5,uVar42);
                FUN_100006cdc(uVar5,uVar42);
                FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
                bVar14 = local_c0[0];
              }
              else {
                local_c0[8] = 0;
                local_c0[9] = 0;
                local_c0[10] = 0;
                local_c0[0xb] = 0;
                local_c0[0xc] = 0;
                local_c0[0xd] = 0;
                local_c0[0] = 0;
                local_c0[1] = 0;
                local_c0[2] = 0;
                local_c0[3] = 0;
                local_c0[4] = 0;
                local_c0[5] = 0;
                local_c0[6] = 0;
                local_c0[7] = 0;
                FUN_100008184(uVar5,uVar42);
                pbVar35 = local_c0;
LAB_10056cc70:
                FUN_100009038(local_c9,local_c0,pbVar35,uVar5,uVar42);
                FUN_100006cdc(uVar5,uVar42);
                FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
                bVar14 = local_c9[0];
              }
              if ((bVar14 & 1) != 0) goto LAB_10056bc04;
            }
            FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
            FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
            FUN_100006cdc(uVar3,uVar6);
          }
LAB_10056d088:
          FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
          FUN_100006cdc(uVar28,uVar34);
          goto LAB_10056d098;
        }
        if (uVar38 == 0) {
          if ((uVar43 >> 0x1c & 3) != 0 || (bVar50 & 1) != 0) goto LAB_10056ce64;
          dVar31 = 0.0;
          if ((uVar4 & 1) == 0) {
            dVar31 = dVar1;
          }
          local_c0[8] = bVar14;
          local_c0[9] = bVar16;
          local_c0[10] = bVar18;
          local_c0[0xb] = bVar20;
          local_c0[0xc] = bVar22;
          local_c0[0xd] = bVar24;
          FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
          FUN_100008184(uVar28,uVar34);
          FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
          FUN_100008184(uVar3,uVar6);
          FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
          FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
          if ((uVar5 & 1) == 0) {
            bVar27 = dVar31 == dVar2;
            goto LAB_10056c5e4;
          }
          if (dVar31 != 0.0) goto LAB_10056cef8;
        }
        else if (uVar38 == 1) {
          if ((uVar43 >> 0x1c & 3 | (uVar51 & 1) << 2) != 1) {
LAB_10056ce64:
            local_c0[8] = bVar14;
            local_c0[9] = bVar16;
            local_c0[10] = bVar18;
            local_c0[0xb] = bVar20;
            local_c0[0xc] = bVar22;
            local_c0[0xd] = bVar24;
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_100008184(uVar28,uVar34);
            FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
            FUN_100008184(uVar3,uVar6);
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
LAB_10056cee4:
            FUN_10051ff3c(dVar2,uVar5,uVar44,bVar50);
            goto LAB_10056cef8;
          }
          local_c0[8] = bVar14;
          local_c0[9] = bVar16;
          local_c0[10] = bVar18;
          local_c0[0xb] = bVar20;
          local_c0[0xc] = bVar22;
          local_c0[0xd] = bVar24;
          FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
          FUN_100008184(uVar28,uVar34);
          FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
          FUN_100008184(uVar3,uVar6);
          FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
          FUN_10051fe90(dVar2,uVar5,uVar44,bVar50);
          bVar27 = dVar1 == dVar2;
LAB_10056c5e4:
          if (!bVar27) goto LAB_10056cef8;
        }
        else {
          if ((uVar43 >> 0x1c & 3 | (bVar50 & 1) << 2) != 2) goto LAB_10056ce64;
          if ((dVar1 == dVar2) && (uVar4 == uVar5)) {
            local_c0[8] = bVar14;
            local_c0[9] = bVar16;
            local_c0[10] = bVar18;
            local_c0[0xb] = bVar20;
            local_c0[0xc] = bVar22;
            local_c0[0xd] = bVar24;
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_100008184(uVar28,uVar34);
            FUN_10051fe90(dVar1,uVar4,uVar44,bVar50);
            FUN_100008184(uVar3,uVar6);
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_10051fe90(dVar1,uVar4,uVar44,bVar50);
            FUN_10051ff3c(dVar1,uVar4,uVar44,bVar50);
          }
          else {
            dVar31 = dVar1;
            local_c0[8] = bVar14;
            local_c0[9] = bVar16;
            local_c0[10] = bVar18;
            local_c0[0xb] = bVar20;
            local_c0[0xc] = bVar22;
            local_c0[0xd] = bVar24;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (dVar1,uVar4,dVar2,uVar5,0);
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_100008184(uVar28,uVar34);
            FUN_10051fe90(dVar2,uVar5,uVar44,uVar51);
            FUN_100008184(uVar3,uVar6);
            FUN_10051fe90(dVar1,uVar4,uVar41,uVar36);
            FUN_10051fe90(dVar2,uVar5,uVar44,uVar51);
            FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
            if (((ulong)dVar31 & 1) == 0) goto LAB_10056cef8;
          }
        }
LAB_10056bc04:
        dVar31 = dVar1;
        FUN_10051ff3c(dVar1,uVar4,uVar41,uVar48);
        uVar48 = (uint)(uVar34 >> 0x20);
        uVar37 = uVar48 >> 0x1e;
        uVar38 = (uint)(uVar6 >> 0x20);
        uVar43 = uVar38 >> 0x1e;
        iVar39 = (int)uVar28;
        if (uVar34 >> 0x3e == 3) {
          uVar42 = 0;
          if ((((uVar28 != 0) || (uVar34 != 0xc000000000000000)) || (uVar6 >> 0x3e < 3)) ||
             ((uVar42 = 0, uVar3 != 0 || (uVar6 != 0xc000000000000000)))) {
joined_r0x00010056c114:
            if (1 < uVar43) goto LAB_10056bdac;
LAB_10056bf0c:
            if (uVar43 == 0) {
              uVar45 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar40 = (int)(uVar3 >> 0x20);
              if (SBORROW4(iVar40,(int)uVar3)) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0e0);
                (*pcVar26)();
              }
              uVar45 = (ulong)(iVar40 - (int)uVar3);
            }
            goto LAB_10056bf2c;
          }
          FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
          FUN_100006cdc(0,0xc000000000000000);
          FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
          uVar28 = 0;
          uVar34 = 0xc000000000000000;
LAB_10056badc:
          FUN_100006cdc(uVar28,uVar34);
        }
        else {
          if (1 < uVar48 >> 0x1e) {
            if (uVar37 == 2) {
              uVar42 = *(long *)(uVar28 + 0x18) - *(long *)(uVar28 + 0x10);
              if (SBORROW8(*(long *)(uVar28 + 0x18),*(long *)(uVar28 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0e8);
                (*pcVar26)();
              }
            }
            else {
              uVar42 = 0;
            }
            goto joined_r0x00010056c114;
          }
          if (uVar37 == 0) {
            uVar42 = uVar34 >> 0x30 & 0xff;
          }
          else {
            iVar40 = (int)(uVar28 >> 0x20);
            if (SBORROW4(iVar40,iVar39)) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0ec);
              (*pcVar26)();
            }
            uVar42 = (ulong)(iVar40 - iVar39);
          }
          if (uVar38 >> 0x1e < 2) goto LAB_10056bf0c;
LAB_10056bdac:
          if (uVar43 != 2) {
            if (uVar42 != 0) {
LAB_10056cdc8:
              FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
              FUN_100006cdc(uVar3,uVar6);
              goto LAB_10056d088;
            }
LAB_10056baa4:
            FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
            FUN_100006cdc(uVar3,uVar6);
            FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
            goto LAB_10056badc;
          }
          uVar45 = *(long *)(uVar3 + 0x18) - *(long *)(uVar3 + 0x10);
          if (SBORROW8(*(long *)(uVar3 + 0x18),*(long *)(uVar3 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0e4);
            (*pcVar26)();
          }
LAB_10056bf2c:
          if (uVar42 != uVar45) goto LAB_10056cdc8;
          if ((long)uVar42 < 1) goto LAB_10056baa4;
          if (uVar37 < 2) {
            if (uVar37 != 0) {
              lVar55 = (long)iVar39;
              dVar29 = (double)(((long)uVar28 >> 0x20) - lVar55);
              if ((long)uVar28 >> 0x20 < lVar55) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0f0);
                (*pcVar26)();
              }
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              dVar30 = dVar31;
              if (dVar31 != 0.0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar55,(long)dVar30)) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0fc);
                  (*pcVar26)();
                }
                dVar31 = (double)((lVar55 - (long)dVar30) + (long)dVar31);
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)dVar29 <= (long)dVar30) {
                dVar30 = dVar29;
              }
              lVar55 = 0;
              if (dVar31 != 0.0) {
                lVar55 = (long)dVar30 + (long)dVar31;
              }
              FUN_100009038(local_c0,dVar31,lVar55,uVar3,uVar6);
              FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
              FUN_100006cdc(uVar3,uVar6);
              goto LAB_10056c1d4;
            }
            local_c0[0] = (byte)uVar28;
            local_c0[1] = (byte)(uVar28 >> 8);
            local_c0[2] = (byte)(uVar28 >> 0x10);
            local_c0[3] = (byte)(uVar28 >> 0x18);
            local_c0[4] = (byte)(uVar28 >> 0x20);
            local_c0[5] = (byte)(uVar28 >> 0x28);
            local_c0[6] = (byte)(uVar28 >> 0x30);
            local_c0[7] = (byte)(uVar28 >> 0x38);
            local_c0[8] = (byte)uVar34;
            local_c0[9] = (byte)(uVar34 >> 8);
            local_c0[10] = (byte)(uVar34 >> 0x10);
            local_c0[0xb] = (byte)(uVar34 >> 0x18);
            local_c0[0xc] = (byte)(uVar34 >> 0x20);
            local_c0[0xd] = (byte)(uVar34 >> 0x28);
            FUN_100009038(local_c9,local_c0,local_c0 + (uVar34 >> 0x30 & 0xff),uVar3,uVar6);
            FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
            FUN_100006cdc(uVar3,uVar6);
            FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
LAB_10056c260:
            FUN_100006cdc(uVar28,uVar34);
            bVar14 = local_c9[0];
          }
          else {
            if (uVar37 != 2) {
              local_c0[8] = 0;
              local_c0[9] = 0;
              local_c0[10] = 0;
              local_c0[0xb] = 0;
              local_c0[0xc] = 0;
              local_c0[0xd] = 0;
              local_c0[0] = 0;
              local_c0[1] = 0;
              local_c0[2] = 0;
              local_c0[3] = 0;
              local_c0[4] = 0;
              local_c0[5] = 0;
              local_c0[6] = 0;
              local_c0[7] = 0;
              FUN_100009038(local_c9,local_c0,local_c0,uVar3,uVar6);
              FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
              FUN_100006cdc(uVar3,uVar6);
              FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
              goto LAB_10056c260;
            }
            lVar55 = *(long *)(uVar28 + 0x10);
            lVar53 = *(long *)(uVar28 + 0x18);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            dVar29 = dVar31;
            if (dVar31 != 0.0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar55,(long)dVar29)) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0f8);
                (*pcVar26)();
              }
              dVar31 = (double)((lVar55 - (long)dVar29) + (long)dVar31);
            }
            dVar30 = (double)(lVar53 - lVar55);
            if (SBORROW8(lVar53,lVar55)) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x10056d0f4);
              (*pcVar26)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)dVar30 <= (long)dVar29) {
              dVar29 = dVar30;
            }
            lVar55 = 0;
            if (dVar31 != 0.0) {
              lVar55 = (long)dVar29 + (long)dVar31;
            }
            FUN_100009038(local_c0,dVar31,lVar55,uVar3,uVar6);
            FUN_10051ff3c(dVar2,uVar5,uVar44,uVar51);
            FUN_100006cdc(uVar3,uVar6);
LAB_10056c1d4:
            FUN_10051ff3c(dVar1,uVar4,uVar41,uVar36);
            FUN_100006cdc(uVar28,uVar34);
            bVar14 = local_c0[0];
          }
          if ((bVar14 & 1) == 0) goto LAB_10056d098;
        }
        puVar47 = puVar47 + 6;
        puVar57 = puVar57 + 6;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
    uVar33 = 1;
  }
  else {
LAB_10056d098:
    uVar33 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar33);
  }
  return;
}

