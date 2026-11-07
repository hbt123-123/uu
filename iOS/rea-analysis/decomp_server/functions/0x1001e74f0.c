// rea decompile_all
// name: FUN_1001e74f0
// address: 0x1001e74f0
// body: available
// range: 0x1001e74f0-0x1001e770b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001e74f0(long param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar3 = (uint)(param_2 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  iVar10 = (int)param_1;
  iVar9 = (int)((ulong)param_1 >> 0x20);
  if (uVar3 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((param_2 >> 0x30 & 0xff) < 0x10) {
        return 0x10;
      }
    }
    else {
      if (SBORROW4(iVar9,iVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e76f0);
        (*pcVar4)();
      }
      if (iVar9 - iVar10 < 0x10) {
        return 0x10;
      }
    }
  }
  else {
    if (uVar12 != 2) {
      return 0x10;
    }
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e76ec);
      (*pcVar4)();
    }
    if (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) < 0x10) {
      return 0x10;
    }
  }
  FUN_100008184(param_1,param_2);
  lVar5 = param_1;
  FUN_1001227a8(param_1,param_2);
  uVar11 = *(ulong *)(lVar5 + 0x10);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e76e8);
    (*pcVar4)();
  }
  if (*(char *)(lVar5 + 0x20) == 'T') {
    if (uVar11 == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e76f4);
      (*pcVar4)();
    }
    if (*(char *)(lVar5 + 0x21) == 'E') {
      if (uVar11 < 3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e76f8);
        (*pcVar4)();
      }
      if (*(char *)(lVar5 + 0x22) == 'R') {
        if (uVar11 == 3) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e76fc);
          (*pcVar4)();
        }
        if (*(char *)(lVar5 + 0x23) == 'M') {
          if (uVar11 < 6) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e7700);
            (*pcVar4)();
          }
          uVar6 = (ulong)*(byte *)(lVar5 + 0x25);
          FUN_1001e746c();
          if (((uint)uVar6 & 0xff) != 0x10) {
            if (uVar11 == 6) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e7704);
              (*pcVar4)();
            }
            if (uVar11 < 8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e7708);
              (*pcVar4)();
            }
            bVar1 = *(byte *)(lVar5 + 0x26);
            bVar2 = *(byte *)(lVar5 + 0x27);
            lVar7 = lVar5;
            FUN_1001e7484(lVar5,8);
            lVar8 = lVar5;
            FUN_1001e7484(lVar5,0xc);
            _swift_bridgeObjectRelease(lVar5);
            if (0x100000 < (uint)lVar8) {
              return 0x10;
            }
            if (uVar12 == 2) {
              uVar11 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
              if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e76a8);
                (*pcVar4)();
              }
            }
            else if (uVar12 == 1) {
              if (SBORROW4(iVar9,iVar10)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e770c);
                (*pcVar4)();
              }
              uVar11 = (ulong)(iVar9 - iVar10);
            }
            else {
              uVar11 = param_2 >> 0x30 & 0xff;
            }
            if (uVar11 != (uint)lVar8 + 0x10) {
              return 0x10;
            }
            __s10Foundation4DataV7subdata2inACSnySiG_tF(0x10,uVar11,param_1,param_2);
            return (ulong)bVar1 << 0x10 | (ulong)bVar2 << 0x18 | uVar6 & 0xff | lVar7 << 0x20;
          }
        }
      }
    }
  }
  _swift_bridgeObjectRelease();
  return 0x10;
}

