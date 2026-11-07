// rea decompile_all
// name: FUN_1000b3070
// address: 0x1000b3070
// body: available
// range: 0x1000b3070-0x1000b31ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b31f4 to 0x1000c2aa4 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b3070(FILE *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  FILE *pFVar3;
  uint uVar4;
  FILE *pFVar5;
  ulong uVar6;
  FILE *pFVar7;
  ulong uVar8;
  ulong uVar9;
  FILE *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_2);
  if (uVar1 != 0) {
    uVar4 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar8 = 4L << uVar4;
    pFVar5 = (FILE *)0xf;
    do {
      uVar9 = (ulong)pFVar5 & 0xc;
      pFVar3 = pFVar5;
      if (uVar9 == uVar8) {
        FUN_1000b3220(pFVar5,param_1,param_2);
      }
      uVar6 = (ulong)pFVar3 >> 0x10;
      if (uVar1 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b31fc);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) != 0) {
          local_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          pFVar7 = (FILE *)(ulong)*(byte *)((long)&local_70 + uVar6);
          goto joined_r0x0001000b31a4;
        }
        pFVar3 = (FILE *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          pFVar3 = param_1;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
        }
        uVar4 = (uint)pFVar3->_ubuf[uVar6 - 0x74];
        if (uVar9 == uVar8) goto LAB_1000b31a8;
LAB_1000b3158:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_1000b30e0;
LAB_1000b315c:
        pFVar3 = pFVar5;
        if (uVar1 <= (ulong)pFVar3 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b3200);
          (*pcVar2)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(pFVar3,param_1,param_2);
        pFVar5 = pFVar3;
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        pFVar7 = pFVar3;
joined_r0x0001000b31a4:
        uVar4 = (uint)pFVar7;
        if (uVar9 != uVar8) goto LAB_1000b3158;
LAB_1000b31a8:
        FUN_1000b3220(pFVar5,param_1,param_2);
        pFVar3 = pFVar5;
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_1000b315c;
LAB_1000b30e0:
        pFVar5 = (FILE *)(((ulong)pFVar5 & 0xffffffffffff0000) + 0x10004);
      }
      __s6Darwin6stderrSpySo7__sFILEVGvg();
      _putc(uVar4 & 0xff,pFVar3);
    } while (uVar1 * 4 - ((ulong)pFVar5 >> 0xe) != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}

