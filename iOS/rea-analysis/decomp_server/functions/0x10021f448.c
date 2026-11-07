// rea decompile_all
// name: FUN_10021f448
// address: 0x10021f448
// body: available
// range: 0x10021f448-0x10021fb8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021fb8c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10021f448(ulong param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 extraout_var;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  Bytef local_108 [20];
  uint local_f4;
  undefined8 *******local_f0;
  ulong uStack_e8;
  z_stream local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar3 = (uint)(param_3 >> 0x20);
  uVar25 = uVar3 >> 0x1e;
  iVar6 = (int)param_2;
  if (uVar3 >> 0x1e < 2) {
    if (uVar25 == 0) {
      if ((param_3 & 0xff000000000000) == 0) goto LAB_10021faa4;
    }
    else if ((long)iVar6 == param_2 >> 0x20) goto LAB_10021faa4;
  }
  else if ((uVar25 != 2) || (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)))
  goto LAB_10021faa4;
  local_e0.data_type = 0;
  local_e0._92_4_ = 0;
  local_e0.opaque = (voidpf)0x0;
  local_e0.reserved = 0;
  local_e0.adler = 0;
  local_e0.state = (internal_state *)0x0;
  local_e0.msg = (char *)0x0;
  local_e0.zfree = (free_func)0x0;
  local_e0.zalloc = (alloc_func)0x0;
  local_e0.next_out = (Bytef *)0x0;
  local_e0.total_in = 0;
  local_e0.total_out = 0;
  local_e0.avail_out = 0;
  local_e0._36_4_ = 0;
  local_e0.avail_in = 0;
  local_e0._12_4_ = 0;
  local_e0.next_in = (Bytef *)0x0;
  pcVar11 = "1.2.12";
  uVar12 = 0x70;
  local_f4 = _inflateInit2_(&local_e0,(int)param_1,"1.2.12",0x70);
  puVar22 = (undefined8 *)CONCAT44(extraout_var,local_f4);
  if (local_f4 == 0) {
    uVar23 = param_3 >> 0x30 & 0xff;
    uVar26 = uVar3 >> 0x1e;
    iVar14 = (int)((ulong)param_2 >> 0x20);
    if (uVar26 == 2) {
      uVar21 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
      if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f598);
        (*pcVar5)();
      }
    }
    else {
      uVar21 = uVar23;
      if (uVar26 == 1) {
        if (SBORROW4(iVar14,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb7c);
          (*pcVar5)();
        }
        uVar21 = (long)(iVar14 - iVar6);
      }
    }
    if ((long)(uVar21 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb74);
      (*pcVar5)();
    }
    pppppppuVar7 = (undefined8 *******)(uVar21 << 1);
    FUN_1001e770c();
    lVar17 = (long)iVar6;
    puVar24 = PTR__inflate_100995290;
    local_f0 = pppppppuVar7;
    uStack_e8 = param_1;
    do {
      if ((long)local_e0.total_out < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fae4);
        (*pcVar5)();
      }
      uVar4 = (uint)(uStack_e8 >> 0x20);
      uVar27 = uVar3 >> 0x1e;
      uVar18 = uVar4 >> 0x1e;
      iVar16 = (int)local_f0;
      iVar20 = (int)((ulong)local_f0 >> 0x20);
      if (uVar4 >> 0x1e < 2) {
        if (uVar18 == 0) {
          uVar21 = uStack_e8 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar20,iVar16)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021faf0);
            (*pcVar5)();
          }
          uVar21 = (ulong)(iVar20 - iVar16);
        }
joined_r0x00010021f664:
        if ((long)uVar21 <= (long)local_e0.total_out) goto LAB_10021f6a0;
        if (uVar26 < 2) goto LAB_10021f670;
LAB_10021f744:
        if (uVar27 == 2) {
          uVar21 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
          if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fafc);
            (*pcVar5)();
          }
        }
        else {
          uVar21 = 0;
        }
      }
      else {
        if (uVar18 == 2) {
          uVar21 = (long)local_f0[3] - (long)local_f0[2];
          if (SBORROW8((long)local_f0[3],(long)local_f0[2])) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021faf4);
            (*pcVar5)();
          }
          goto joined_r0x00010021f664;
        }
LAB_10021f6a0:
        if (uVar26 < 2) {
          uVar21 = uVar23;
          if ((uVar25 != 0) && (uVar21 = (long)(iVar14 - iVar6), SBORROW4(iVar14,iVar6))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb64);
            (*pcVar5)();
          }
LAB_10021f6d4:
          if (1 < uVar4 >> 0x1e) goto LAB_10021f6f4;
LAB_10021f6dc:
          if (uVar18 == 0) {
            uVar15 = uStack_e8 >> 0x30 & 0xff;
          }
          else {
            if (SBORROW4(iVar20,iVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb68);
              (*pcVar5)();
            }
            uVar15 = (ulong)(iVar20 - iVar16);
          }
        }
        else {
          if (uVar25 == 2) {
            uVar21 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
            if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb60);
              (*pcVar5)();
            }
            goto LAB_10021f6d4;
          }
          uVar21 = 0;
          if (uVar4 >> 0x1e < 2) goto LAB_10021f6dc;
LAB_10021f6f4:
          if (uVar18 == 2) {
            uVar15 = (long)local_f0[3] - (long)local_f0[2];
            if (SBORROW8((long)local_f0[3],(long)local_f0[2])) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb6c);
              (*pcVar5)();
            }
          }
          else {
            uVar15 = 0;
          }
        }
        pppppppuVar7 = (undefined8 *******)(uVar15 + (long)uVar21 / 2);
        if (SCARRY8(uVar15,(long)uVar21 / 2)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fae8);
          (*pcVar5)();
        }
        if ((long)pppppppuVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021faec);
          (*pcVar5)();
        }
        __s10Foundation4DataV15_RepresentationO5countSivs();
        if (1 < uVar26) goto LAB_10021f744;
LAB_10021f670:
        uVar21 = uVar23;
        if ((uVar27 != 0) && (uVar21 = (long)(iVar14 - iVar6), SBORROW4(iVar14,iVar6))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021faf8);
          (*pcVar5)();
        }
      }
      uVar4 = (uint)(uStack_e8 >> 0x20);
      uVar19 = uVar4 >> 0x1e;
      uVar28 = (uint)uVar21;
      uVar18 = (uint)local_e0.total_in;
      if (uVar4 >> 0x1e < 2) {
        if (uVar19 == 0) {
          uVar15 = uStack_e8 >> 0x30 & 0xff;
        }
        else {
          iVar16 = (int)((ulong)local_f0 >> 0x20);
          if (SBORROW4(iVar16,(int)local_f0)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb00);
            (*pcVar5)();
          }
          uVar15 = (ulong)(iVar16 - (int)local_f0);
        }
joined_r0x00010021f7b0:
        if (uVar3 >> 0x1e < 2) goto LAB_10021f7b4;
LAB_10021f860:
        if (uVar27 != 2) {
          local_108[8] = 0;
          local_108[9] = 0;
          local_108[10] = 0;
          local_108[0xb] = 0;
          local_108[0xc] = 0;
          local_108[0xd] = 0;
          local_108[0] = '\0';
          local_108[1] = 0;
          local_108[2] = 0;
          local_108[3] = 0;
          local_108[4] = 0;
          local_108[5] = 0;
          local_108[6] = 0;
          local_108[7] = 0;
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb08);
            (*pcVar5)();
          }
          local_e0.next_in = local_108 + local_e0.total_in;
          if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb18);
            (*pcVar5)();
          }
          if (uVar21 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb2c);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb38);
            (*pcVar5)();
          }
          if (uVar28 < uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f9fc);
            (*pcVar5)();
          }
          goto LAB_10021f5ec;
        }
        lVar1 = *(long *)(param_2 + 0x10);
        lVar2 = *(long *)(param_2 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (pppppppuVar7 != (undefined8 *******)0x0) {
          pppppppuVar8 = pppppppuVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar1,(long)pppppppuVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb70);
            (*pcVar5)();
          }
          pppppppuVar7 = (undefined8 *******)((lVar1 - (long)pppppppuVar8) + (long)pppppppuVar7);
        }
        if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb14);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg(param_3);
        puVar24 = PTR__inflate_100995290;
        if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb8c);
          (*pcVar5)();
        }
        if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb24);
          (*pcVar5)();
        }
        local_e0.next_in = (Bytef *)(local_e0.total_in + (long)pppppppuVar7);
        if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb34);
          (*pcVar5)();
        }
        if (uVar21 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb44);
          (*pcVar5)();
        }
        if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb50);
          (*pcVar5)();
        }
        if (uVar28 < (uint)local_e0.total_in) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb58);
          (*pcVar5)();
        }
        local_e0.avail_in = uVar28 - (uint)local_e0.total_in;
        pppppppuVar7 = &local_f0;
        puVar13 = &local_f4;
        FUN_10021fb90(pppppppuVar7,&local_e0,uVar15,puVar13,2,PTR__inflate_100995290);
      }
      else {
        if (uVar19 == 2) {
          uVar15 = (long)local_f0[3] - (long)local_f0[2];
          if (SBORROW8((long)local_f0[3],(long)local_f0[2])) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb04);
            (*pcVar5)();
          }
          goto joined_r0x00010021f7b0;
        }
        uVar15 = 0;
        if (1 < uVar27) goto LAB_10021f860;
LAB_10021f7b4:
        if (uVar27 == 0) {
          local_108[0] = (Bytef)param_2;
          local_108[1] = (Bytef)((ulong)param_2 >> 8);
          local_108[2] = (Bytef)((ulong)param_2 >> 0x10);
          local_108[3] = (Bytef)((ulong)param_2 >> 0x18);
          local_108[4] = (Bytef)((ulong)param_2 >> 0x20);
          local_108[5] = (Bytef)((ulong)param_2 >> 0x28);
          local_108[6] = (Bytef)((ulong)param_2 >> 0x30);
          local_108[7] = (Bytef)((ulong)param_2 >> 0x38);
          local_108[8] = (Bytef)param_3;
          local_108[9] = (Bytef)(param_3 >> 8);
          local_108[10] = (Bytef)(param_3 >> 0x10);
          local_108[0xb] = (Bytef)(param_3 >> 0x18);
          local_108[0xc] = (Bytef)(param_3 >> 0x20);
          local_108[0xd] = (Bytef)(param_3 >> 0x28);
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb0c);
            (*pcVar5)();
          }
          local_e0.next_in = local_108 + local_e0.total_in;
          if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb1c);
            (*pcVar5)();
          }
          if (uVar21 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb28);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb3c);
            (*pcVar5)();
          }
          if (uVar28 < uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb48);
            (*pcVar5)();
          }
LAB_10021f5ec:
          local_e0.avail_in = uVar28 - uVar18;
          pppppppuVar7 = &local_f0;
          puVar13 = &local_f4;
          FUN_10021fb90(pppppppuVar7,&local_e0,uVar15,puVar13,2,puVar24);
        }
        else {
          if (param_2 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb10);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (pppppppuVar7 == (undefined8 *******)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
LAB_10021fb84:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb88);
            (*pcVar5)();
          }
          pppppppuVar8 = pppppppuVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,(long)pppppppuVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb20);
            (*pcVar5)();
          }
          lVar1 = (lVar17 - (long)pppppppuVar8) + (long)pppppppuVar7;
          __s10Foundation13__DataStorageC7_lengthSivg();
          puVar24 = PTR__inflate_100995290;
          if (lVar1 == 0) goto LAB_10021fb84;
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb30);
            (*pcVar5)();
          }
          local_e0.next_in = (Bytef *)(local_e0.total_in + lVar1);
          if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb40);
            (*pcVar5)();
          }
          if (uVar21 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb4c);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb54);
            (*pcVar5)();
          }
          if (uVar28 < (uint)local_e0.total_in) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb5c);
            (*pcVar5)();
          }
          local_e0.avail_in = uVar28 - (uint)local_e0.total_in;
          pppppppuVar7 = &local_f0;
          puVar13 = &local_f4;
          FUN_10021fb90(pppppppuVar7,&local_e0,uVar15,puVar13,2,PTR__inflate_100995290);
        }
      }
      uVar4 = local_f4;
      local_e0.next_in = (Bytef *)0x0;
      puVar22 = (undefined8 *)(ulong)local_f4;
    } while (local_f4 == 0);
    iVar6 = _inflateEnd(&local_e0);
    if ((uVar4 == 1) && (iVar6 == 0)) {
      if ((long)local_e0.total_out < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10021fb78);
        (*pcVar5)();
      }
      __s10Foundation4DataV15_RepresentationO5countSivs();
      uVar23 = uStack_e8;
      pppppppuVar7 = local_f0;
      FUN_100008184(local_f0,uStack_e8);
      FUN_100006cdc(pppppppuVar7,uVar23);
    }
    else {
      pcVar11 = local_e0.msg;
      FUN_100220060();
      puVar9 = puVar22;
      FUN_100220134();
      _swift_allocError(&DAT_1009a5ae0,puVar9,0,0);
      *puVar9 = puVar22;
      *(byte *)(puVar9 + 1) = (byte)pcVar11 & 1;
      puVar9[2] = uVar15;
      puVar9[3] = puVar13;
      _swift_willThrow();
      FUN_100006cdc(local_f0,uStack_e8);
    }
  }
  else {
    pcVar10 = local_e0.msg;
    FUN_100220060();
    puVar9 = puVar22;
    FUN_100220134();
    _swift_allocError(&DAT_1009a5ae0,puVar9,0,0);
    *puVar9 = puVar22;
    *(byte *)(puVar9 + 1) = (byte)pcVar10 & 1;
    puVar9[2] = pcVar11;
    puVar9[3] = uVar12;
    _swift_willThrow();
  }
LAB_10021faa4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

