// rea decompile_all
// name: FUN_100521ec0
// address: 0x100521ec0
// body: available
// range: 0x100521ec0-0x10052210f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100521ec0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong local_70;
  ulong uStack_68;
  
  uVar7 = param_2 >> 0x38 & 0xf;
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar5 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar5 = uVar7;
    }
  }
  else {
    uVar5 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar5 != 0) {
    FUN_1005115a8(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100522110);
      (*pcVar4)();
    }
    lVar10 = 0;
    uVar6 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = uVar7;
    }
    uVar7 = 0xf;
    do {
      uVar1 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005220e8);
        (*pcVar4)();
      }
      uVar9 = uVar7;
      if ((uVar7 & 0xc) == 4L << uVar6) {
        FUN_10000caa8(uVar7,param_1,param_2);
      }
      uVar8 = uVar9 >> 0x10;
      if (uVar2 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005220ec);
        (*pcVar4)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          uVar9 = (param_2 & 0xfffffffffffffff) + 0x20;
          if ((param_1 >> 0x3c & 1) == 0) {
            uVar9 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
          uVar9 = (ulong)*(byte *)(uVar9 + uVar8);
        }
        else {
          local_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          uVar9 = (ulong)*(byte *)((long)&local_70 + uVar8);
        }
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
      }
      uVar8 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar8) {
        FUN_1005115a8(1 < *(ulong *)(puVar3 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar3 + uVar8 * 8 + 0x20) = uVar9 & 0xff;
      if ((uVar7 & 0xc) == 4L << uVar6) {
        FUN_10000caa8(uVar7,param_1,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_100522030;
LAB_100521f74:
        uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
      }
      else {
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100521f74;
LAB_100522030:
        if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005220f0);
          (*pcVar4)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar7,param_1,param_2);
      }
      lVar10 = lVar10 + 1;
    } while (uVar1 != uVar5);
  }
  return puVar3;
}

