// rea decompile_all
// name: FUN_10055ea1c
// address: 0x10055ea1c
// body: available
// range: 0x10055ea1c-0x10055edb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10055edb0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010055ed98) */

void FUN_10055ea1c(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  void *pvVar13;
  ulong unaff_x28;
  ulong local_98;
  char local_8a;
  char local_89;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined6 local_80;
  undefined1 local_7a;
  undefined1 uStack_79;
  ulong local_78;
  char *pcStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100560bb8();
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar9 != pbVar1) {
    bVar2 = *pbVar9;
    uVar12 = (ulong)bVar2;
    if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
      local_89 = '\0';
      pcVar8 = &local_89;
      FUN_100560cf4();
      if (unaff_x21 == 0) {
        if (local_89 == '\x01') {
          FUN_10009a308();
          local_78 = uVar12;
          pcStack_70 = pcVar8;
          FUN_1005624a0(&local_78);
        }
        else {
          uVar11 = *(ulong *)(unaff_x20 + 0x28);
          pcVar8 = (char *)(uVar11 + uVar12);
          uVar10 = uVar11;
          FUN_1001f8534();
          local_78 = uVar10;
          pcStack_70 = pcVar8;
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10055edb0);
            (*pcVar5)();
          }
          *(ulong *)(unaff_x20 + 0x28) = uVar11 + uVar12 + 1;
        }
        FUN_100560bb8();
        pbVar9 = *(byte **)(unaff_x20 + 0x28);
        while (pbVar9 != pbVar1) {
          bVar2 = *pbVar9;
          uVar12 = (ulong)bVar2;
          if ((bVar2 != 0x27) && (bVar2 != 0x22)) break;
          *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
          local_8a = '\0';
          FUN_100560cf4(uVar12,&local_8a);
          if (local_8a == '\x01') {
            if (uVar12 == 0) {
              lVar6 = 0;
              uVar10 = 0xc000000000000000;
            }
            else if ((long)uVar12 < 0xf) {
              if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10055edac);
                (*pcVar5)();
              }
              lVar6 = 0;
              uVar10 = unaff_x28 & 0xf00000000000000 | (uVar12 & 0xff) << 0x30;
              unaff_x28 = uVar10;
            }
            else {
              __s10Foundation13__DataStorageCMa();
              _swift_allocObject();
              uVar10 = uVar12;
              __s10Foundation13__DataStorageC6lengthACSi_tcfc();
              if (uVar12 < 0x7fffffff) {
                lVar6 = uVar12 << 0x20;
                uVar10 = uVar10 | 0x4000000000000000;
              }
              else {
                lVar6 = 0;
                __s10Foundation4DataV14RangeReferenceCMa();
                _swift_allocObject();
                *(undefined8 *)(lVar6 + 0x10) = 0;
                *(ulong *)(lVar6 + 0x18) = uVar12;
                uVar10 = uVar10 | 0x8000000000000000;
              }
            }
            local_88 = (undefined6)lVar6;
            uStack_82 = (undefined2)((ulong)lVar6 >> 0x30);
            local_80 = (undefined6)uVar10;
            local_7a = (undefined1)(uVar10 >> 0x30);
            uStack_79 = (undefined1)(uVar10 >> 0x38);
            FUN_1005624a0(&local_88);
            uVar3 = CONCAT26(uStack_82,local_88);
            uVar4 = CONCAT17(uStack_79,CONCAT16(local_7a,local_80));
            __s10Foundation4DataV6appendyyACF(uVar3,uVar4);
            FUN_100006cdc(uVar3,uVar4);
          }
          else {
            pvVar13 = *(void **)(unaff_x20 + 0x28);
            if (uVar12 == 0) {
              lVar6 = 0;
              uVar10 = 0xc000000000000000;
            }
            else if ((long)uVar12 < 0xf) {
              local_80 = 0;
              local_88 = 0;
              uStack_82 = 0;
              local_7a = (undefined1)uVar12;
              _memcpy(&local_88,pvVar13,uVar12);
              lVar6 = CONCAT26(uStack_82,local_88);
              uVar10 = local_98 & 0xf00000000000000 | (ulong)CONCAT16(local_7a,local_80);
              local_98 = uVar10;
            }
            else {
              __s10Foundation13__DataStorageCMa();
              _swift_allocObject();
              pvVar7 = pvVar13;
              __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(pvVar13,uVar12);
              if (uVar12 < 0x7fffffff) {
                lVar6 = uVar12 << 0x20;
                uVar10 = (ulong)pvVar7 | 0x4000000000000000;
              }
              else {
                lVar6 = 0;
                __s10Foundation4DataV14RangeReferenceCMa();
                _swift_allocObject();
                *(undefined8 *)(lVar6 + 0x10) = 0;
                *(ulong *)(lVar6 + 0x18) = uVar12;
                uVar10 = (ulong)pvVar7 | 0x8000000000000000;
              }
            }
            __s10Foundation4DataV6appendyyACF(lVar6,uVar10);
            FUN_100006cdc(lVar6,uVar10);
            if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10055eda8);
              (*pcVar5)();
            }
            *(ulong *)(unaff_x20 + 0x28) = (long)pvVar13 + uVar12 + 1;
          }
          FUN_100560bb8();
          pbVar9 = *(byte **)(unaff_x20 + 0x28);
        }
      }
      goto LAB_10055eafc;
    }
  }
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
LAB_10055eafc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

