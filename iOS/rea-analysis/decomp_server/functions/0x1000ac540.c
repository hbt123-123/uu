// rea decompile_all
// name: FUN_1000ac540
// address: 0x1000ac540
// body: available
// range: 0x1000ac540-0x1000ac867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_1000ac540(ulong param_1,long param_2,long param_3,ulong param_4,ulong param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar12 = 0;
  uVar11 = param_1;
  while( true ) {
    bVar6 = param_2 <= (long)uVar11;
    if (param_3 < 1) {
      bVar6 = (long)uVar11 <= param_2;
    }
    if (bVar6) break;
    bVar6 = SCARRY8(uVar11,param_3);
    uVar1 = uVar11 + param_3;
    uVar11 = (long)uVar1 >> 0x3f ^ 0x8000000000000000;
    if (!bVar6) {
      uVar11 = uVar1;
    }
    bVar6 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000ac5bc);
      (*pcVar5)();
    }
  }
  FUN_10006fae0(0,lVar12,0);
  uVar11 = param_5 >> 0x38 & 0xf;
  uVar3 = (uint)(param_5 >> 0x20);
  if (lVar12 != 0) {
    uVar1 = param_4;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar1 = uVar11;
    }
    uVar2 = 0xb;
    if ((uVar3 >> 0x1c & (uint)((param_4 & 0x800000000000000) == 0)) == 0) {
      uVar2 = 7;
    }
    uVar10 = param_1;
    do {
      bVar6 = param_2 <= (long)uVar10;
      if (param_3 < 1) {
        bVar6 = (long)uVar10 <= param_2;
      }
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000ac860);
        (*pcVar5)();
      }
      param_1 = (long)(uVar10 + param_3) >> 0x3f ^ 0x8000000000000000;
      if (!SCARRY8(uVar10,param_3)) {
        param_1 = uVar10 + param_3;
      }
      uVar7 = 0xf;
      __sSS5index_8offsetBySS5IndexVAD_SitF(0xf,uVar10,param_4,param_5);
      uVar8 = uVar7;
      uVar9 = param_6;
      __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF();
      uVar10 = uVar2 | uVar1 << 0x10;
      if ((uVar9 & 1) == 0) {
        uVar10 = uVar8;
      }
      if (uVar10 >> 0xe < uVar7 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000ac864);
        (*pcVar5)();
      }
      uVar8 = param_5;
      __sSSySsSnySS5IndexVGcig(uVar7,uVar10,param_4,param_5);
      __sSS14_fromSubstringySSSshFZ();
      _swift_bridgeObjectRelease(uVar8);
      uVar8 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar8) {
        FUN_10006fae0(1 < *(ulong *)(puVar4 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar4 + uVar8 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puVar4 + uVar8 * 0x10 + 0x28) = uVar10;
      lVar12 = lVar12 + -1;
      uVar10 = param_1;
    } while (lVar12 != 0);
  }
  bVar6 = param_2 <= (long)param_1;
  if (param_3 < 1) {
    bVar6 = (long)param_1 <= param_2;
  }
  if (!bVar6) {
    uVar1 = param_4;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar1 = uVar11;
    }
    uVar11 = 0xb;
    if ((uVar3 >> 0x1c & (uint)((param_4 & 0x800000000000000) == 0)) == 0) {
      uVar11 = 7;
    }
    do {
      uVar2 = (long)(param_1 + param_3) >> 0x3f ^ 0x8000000000000000;
      if (!SCARRY8(param_1,param_3)) {
        uVar2 = param_1 + param_3;
      }
      uVar7 = 0xf;
      __sSS5index_8offsetBySS5IndexVAD_SitF(0xf,param_1,param_4,param_5);
      uVar8 = uVar7;
      uVar9 = param_6;
      __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF();
      uVar10 = uVar11 | uVar1 << 0x10;
      if ((uVar9 & 1) == 0) {
        uVar10 = uVar8;
      }
      if (uVar10 >> 0xe < uVar7 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000ac868);
        (*pcVar5)();
      }
      uVar8 = param_5;
      __sSSySsSnySS5IndexVGcig(uVar7,uVar10,param_4,param_5);
      __sSS14_fromSubstringySSSshFZ();
      _swift_bridgeObjectRelease(uVar8);
      uVar8 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar8) {
        FUN_10006fae0(1 < *(ulong *)(puVar4 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar4 + uVar8 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puVar4 + uVar8 * 0x10 + 0x28) = uVar10;
      bVar6 = param_2 <= (long)uVar2;
      if (param_3 < 1) {
        bVar6 = (long)uVar2 <= param_2;
      }
      param_1 = uVar2;
    } while (!bVar6);
  }
  return puVar4;
}

