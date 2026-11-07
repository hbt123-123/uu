// rea decompile_all
// name: FUN_10062f8f4
// address: 0x10062f8f4
// body: available
// range: 0x10062f8f4-0x10062faff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10062f8f4(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_60 [14];
  byte local_52;
  byte local_51;
  
  lVar3 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar5 = *(long *)(lVar10 + 0x40);
  uVar8 = (uint)(param_2 >> 0x20);
  uVar4 = uVar8 >> 0x1e;
  iVar7 = (int)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x20);
  if (uVar8 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((param_2 >> 0x30 & 0xff) != 0) {
LAB_10062f97c:
        uVar8 = uVar8 >> 0x1e;
        if (uVar8 == 2) {
          uVar13 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10062f9d0);
            (*pcVar2)();
          }
        }
        else if (uVar8 == 1) {
          if (SBORROW4(iVar6,iVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10062fb00);
            (*pcVar2)();
          }
          uVar13 = (ulong)(iVar6 - iVar7);
        }
        else {
          uVar13 = param_2 >> 0x30 & 0xff;
        }
        uVar12 = uVar13 - 1;
        if (SBORROW8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10062faec);
          (*pcVar2)();
        }
        if ((long)uVar12 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10062faf0);
          (*pcVar2)();
        }
        if ((long)uVar12 < 0x80000000) {
          if (uVar8 == 0) {
            lVar9 = 0;
          }
          else if (uVar4 == 2) {
            lVar9 = *(long *)(param_1 + 0x10);
          }
          else {
            lVar9 = (long)iVar7;
          }
          FUN_100008184(param_1,param_2);
          __s10Foundation4DataV8IteratorV_2atAeC_SitcfC
                    (auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,param_2,lVar9);
          FUN_10062fb84();
          __sSt4next7ElementQzSgyFTj(&local_52,lVar3,param_1);
          if ((local_51 & 1) == 0) {
            uVar4 = 0;
            uVar8 = (int)uVar13 * 8;
            do {
              uVar8 = uVar8 - 8;
              uVar11 = (uint)uVar12;
              if ((int)uVar11 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10062fae4);
                (*pcVar2)();
              }
              if (uVar11 >> 0x1d != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10062fae8);
                (*pcVar2)();
              }
              uVar1 = 0;
              if (uVar11 < 4) {
                uVar1 = (uint)local_52 << (ulong)(uVar8 & 0x18);
              }
              uVar4 = uVar1 | uVar4;
              uVar12 = (ulong)(uVar11 - 1);
              __sSt4next7ElementQzSgyFTj(&local_52,lVar3,param_1);
            } while (local_51 != 1);
          }
          else {
            uVar4 = 0;
          }
          (**(code **)(lVar10 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar3);
          return uVar4;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062faf4);
        (*pcVar2)();
      }
    }
    else {
      if (SBORROW4(iVar6,iVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062fafc);
        (*pcVar2)();
      }
      if (0 < iVar6 - iVar7) goto LAB_10062f97c;
    }
  }
  else if (uVar4 == 2) {
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062faf8);
      (*pcVar2)();
    }
    if (0 < *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) goto LAB_10062f97c;
  }
  return 0;
}

