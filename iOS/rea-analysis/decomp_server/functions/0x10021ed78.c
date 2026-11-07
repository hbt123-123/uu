// rea decompile_all
// name: FUN_10021ed78
// address: 0x10021ed78
// body: available
// range: 0x10021ed78-0x10021f447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021f444 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021ed78(int param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  Bytef local_108 [20];
  uint local_f4;
  long local_f0;
  ulong uStack_e8;
  z_stream local_e0;
  long local_70;
  undefined4 extraout_var;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar3 = (uint)(param_4 >> 0x20);
  uVar25 = uVar3 >> 0x1e;
  iVar6 = (int)param_3;
  if (uVar3 >> 0x1e < 2) {
    if (uVar25 == 0) {
      if ((param_4 & 0xff000000000000) == 0) goto LAB_10021f36c;
    }
    else if ((long)iVar6 == param_3 >> 0x20) goto LAB_10021f36c;
  }
  else if ((uVar25 != 2) || (*(long *)(param_3 + 0x10) == *(long *)(param_3 + 0x18)))
  goto LAB_10021f36c;
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
  uVar14 = 8;
  local_f4 = _deflateInit2_(&local_e0,param_1,8,(int)param_2,9,0,"1.2.12",0x70);
  puVar7 = (undefined8 *)CONCAT44(extraout_var,local_f4);
  if (local_f4 == 0) {
    __s10Foundation13__DataStorageCMa();
    _swift_allocObject();
    plVar9 = (long *)0x4000;
    __s10Foundation13__DataStorageC8capacityACSi_tcfc();
    uStack_e8 = (ulong)plVar9 | 0x4000000000000000;
    local_f0 = 0;
    iVar16 = (int)((ulong)param_3 >> 0x20);
    lVar18 = (long)iVar6;
    puVar24 = PTR__deflate_100995288;
    do {
      if ((long)local_e0.total_out < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3ac);
        (*pcVar5)();
      }
      uVar4 = (uint)(uStack_e8 >> 0x20);
      uVar26 = uVar3 >> 0x1e;
      uVar19 = uVar4 >> 0x1e;
      iVar17 = (int)local_f0;
      iVar21 = (int)((ulong)local_f0 >> 0x20);
      if (uVar4 >> 0x1e < 2) {
        if (uVar19 == 0) {
          uVar22 = uStack_e8 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar21,iVar17)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3b8);
            (*pcVar5)();
          }
          uVar22 = (ulong)(iVar21 - iVar17);
        }
joined_r0x00010021ef78:
        if ((long)uVar22 <= (long)local_e0.total_out) {
          if (uVar19 == 2) {
            uVar22 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
            if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f430);
              (*pcVar5)();
            }
          }
          else if (uVar19 == 1) {
            if (SBORROW4(iVar21,iVar17)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f42c);
              (*pcVar5)();
            }
            uVar22 = (ulong)(iVar21 - iVar17);
          }
          else {
            uVar22 = uStack_e8 >> 0x30 & 0xff;
          }
          goto LAB_10021eff4;
        }
        if (uVar26 < 2) goto LAB_10021ef84;
LAB_10021f010:
        if (uVar25 == 2) {
          uVar22 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
          if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3c4);
            (*pcVar5)();
          }
        }
        else {
          uVar22 = 0;
        }
      }
      else {
        if (uVar19 == 2) {
          uVar22 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
          if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3bc);
            (*pcVar5)();
          }
          goto joined_r0x00010021ef78;
        }
        uVar22 = 0;
LAB_10021eff4:
        plVar9 = (long *)(uVar22 + 0x4000);
        if (SCARRY8(uVar22,0x4000)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3b0);
          (*pcVar5)();
        }
        if ((long)plVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3b4);
          (*pcVar5)();
        }
        __s10Foundation4DataV15_RepresentationO5countSivs();
        if (1 < uVar26) goto LAB_10021f010;
LAB_10021ef84:
        uVar22 = param_4 >> 0x30 & 0xff;
        if ((uVar25 != 0) && (uVar22 = (long)(iVar16 - iVar6), SBORROW4(iVar16,iVar6))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3c0);
          (*pcVar5)();
        }
      }
      uVar4 = (uint)(uStack_e8 >> 0x20);
      uVar20 = uVar4 >> 0x1e;
      uVar27 = (uint)uVar22;
      uVar19 = (uint)local_e0.total_in;
      if (uVar4 >> 0x1e < 2) {
        if (uVar20 == 0) {
          uVar23 = uStack_e8 >> 0x30 & 0xff;
        }
        else {
          iVar17 = (int)((ulong)local_f0 >> 0x20);
          if (SBORROW4(iVar17,(int)local_f0)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3c8);
            (*pcVar5)();
          }
          uVar23 = (ulong)(iVar17 - (int)local_f0);
        }
joined_r0x00010021f07c:
        if (uVar3 >> 0x1e < 2) goto LAB_10021f080;
LAB_10021f12c:
        if (uVar26 != 2) {
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
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3d8);
            (*pcVar5)();
          }
          local_e0.next_in = local_108 + local_e0.total_in;
          if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3e4);
            (*pcVar5)();
          }
          if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3f4);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f404);
            (*pcVar5)();
          }
          if (uVar27 < uVar19) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f2c0);
            (*pcVar5)();
          }
          goto LAB_10021ef00;
        }
        lVar1 = *(long *)(param_3 + 0x10);
        lVar2 = *(long *)(param_3 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar1,(long)plVar10)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f428);
            (*pcVar5)();
          }
          plVar9 = (long *)((lVar1 - (long)plVar10) + (long)plVar9);
        }
        if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3dc);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar24 = PTR__deflate_100995288;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f444);
          (*pcVar5)();
        }
        if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3ec);
          (*pcVar5)();
        }
        local_e0.next_in = (Bytef *)(local_e0.total_in + (long)plVar9);
        if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3fc);
          (*pcVar5)();
        }
        if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f40c);
          (*pcVar5)();
        }
        if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f418);
          (*pcVar5)();
        }
        if (uVar27 < (uint)local_e0.total_in) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f420);
          (*pcVar5)();
        }
        local_e0.avail_in = uVar27 - (uint)local_e0.total_in;
        plVar9 = &local_f0;
        puVar15 = &local_f4;
        FUN_10021fb90(plVar9,&local_e0,uVar23,puVar15,4,PTR__deflate_100995288);
      }
      else {
        if (uVar20 == 2) {
          uVar23 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
          if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3cc);
            (*pcVar5)();
          }
          goto joined_r0x00010021f07c;
        }
        uVar23 = 0;
        if (1 < uVar26) goto LAB_10021f12c;
LAB_10021f080:
        if (uVar26 == 0) {
          local_108[0] = (Bytef)param_3;
          local_108[1] = (Bytef)((ulong)param_3 >> 8);
          local_108[2] = (Bytef)((ulong)param_3 >> 0x10);
          local_108[3] = (Bytef)((ulong)param_3 >> 0x18);
          local_108[4] = (Bytef)((ulong)param_3 >> 0x20);
          local_108[5] = (Bytef)((ulong)param_3 >> 0x28);
          local_108[6] = (Bytef)((ulong)param_3 >> 0x30);
          local_108[7] = (Bytef)((ulong)param_3 >> 0x38);
          local_108[8] = (Bytef)param_4;
          local_108[9] = (Bytef)(param_4 >> 8);
          local_108[10] = (Bytef)(param_4 >> 0x10);
          local_108[0xb] = (Bytef)(param_4 >> 0x18);
          local_108[0xc] = (Bytef)(param_4 >> 0x20);
          local_108[0xd] = (Bytef)(param_4 >> 0x28);
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3d4);
            (*pcVar5)();
          }
          local_e0.next_in = local_108 + local_e0.total_in;
          if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3e0);
            (*pcVar5)();
          }
          if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3f0);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f400);
            (*pcVar5)();
          }
          if (uVar27 < uVar19) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f410);
            (*pcVar5)();
          }
LAB_10021ef00:
          local_e0.avail_in = uVar27 - uVar19;
          plVar9 = &local_f0;
          puVar15 = &local_f4;
          FUN_10021fb90(plVar9,&local_e0,uVar23,puVar15,4,puVar24);
        }
        else {
          if (param_3 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3d0);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (plVar9 == (long *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
LAB_10021f43c:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f440);
            (*pcVar5)();
          }
          plVar10 = plVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,(long)plVar10)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3e8);
            (*pcVar5)();
          }
          lVar1 = (lVar18 - (long)plVar10) + (long)plVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          puVar24 = PTR__deflate_100995288;
          if (lVar1 == 0) goto LAB_10021f43c;
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f3f8);
            (*pcVar5)();
          }
          local_e0.next_in = (Bytef *)(local_e0.total_in + lVar1);
          if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f408);
            (*pcVar5)();
          }
          if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f414);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f41c);
            (*pcVar5)();
          }
          if (uVar27 < (uint)local_e0.total_in) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f424);
            (*pcVar5)();
          }
          local_e0.avail_in = uVar27 - (uint)local_e0.total_in;
          plVar9 = &local_f0;
          puVar15 = &local_f4;
          FUN_10021fb90(plVar9,&local_e0,uVar23,puVar15,4,PTR__deflate_100995288);
        }
      }
      local_e0.next_in = (Bytef *)0x0;
    } while (local_e0.avail_out == 0);
    iVar6 = _deflateEnd(&local_e0);
    puVar11 = (ulong *)(ulong)local_f4;
    if ((iVar6 == 0) && (local_f4 == 1)) {
      if ((long)local_e0.total_out < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10021f434);
        (*pcVar5)();
      }
      __s10Foundation4DataV15_RepresentationO5countSivs();
      uVar22 = uStack_e8;
      lVar18 = local_f0;
      FUN_100008184(local_f0,uStack_e8);
      FUN_100006cdc(lVar18,uVar22);
    }
    else {
      pcVar13 = local_e0.msg;
      FUN_100220060();
      puVar12 = puVar11;
      FUN_100220134();
      _swift_allocError(&DAT_1009a5ae0,puVar12,0,0);
      *puVar12 = (ulong)puVar11;
      *(byte *)(puVar12 + 1) = (byte)pcVar13 & 1;
      puVar12[2] = uVar23;
      puVar12[3] = (ulong)puVar15;
      _swift_willThrow();
      FUN_100006cdc(local_f0,uStack_e8);
    }
  }
  else {
    pcVar13 = local_e0.msg;
    FUN_100220060();
    puVar8 = puVar7;
    FUN_100220134();
    _swift_allocError(&DAT_1009a5ae0,puVar8,0,0);
    *puVar8 = puVar7;
    *(byte *)(puVar8 + 1) = (byte)pcVar13 & 1;
    puVar8[2] = uVar14;
    puVar8[3] = param_2;
    _swift_willThrow();
  }
LAB_10021f36c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

