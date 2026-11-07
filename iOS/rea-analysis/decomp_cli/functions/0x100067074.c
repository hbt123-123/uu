// rea decompile_all
// name: FUN_100067074
// address: 0x100067074
// body: available
// range: 0x100067074-0x1000672c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100067074(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  byte *pbVar13;
  
  lVar11 = *(long *)(param_3 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar11 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    pbVar13 = (byte *)(param_3 + 0x30);
    do {
      lVar2 = *(long *)(pbVar13 + -0x10);
      uVar3 = *(ulong *)(pbVar13 + -8);
      bVar4 = *pbVar13;
      uVar10 = uVar3;
      lVar7 = lVar2;
      if (bVar4 >> 6 == 0) {
        bVar12 = 0x80;
        if ((bVar4 & 1) == 0) {
          bVar12 = 0;
        }
      }
      else if (bVar4 >> 6 == 1) {
        bVar12 = bVar4 & 1 | 0x40;
      }
      else if ((uVar3 == 0 && lVar2 == 0) && (bVar4 == 0x80)) {
        lVar7 = 0x2d;
        uVar10 = 0xe100000000000000;
        FUN_100078034(0x2d,0xe100000000000000,param_1,param_2);
        bVar12 = 0;
      }
      else {
        if (uVar1 == 0) {
          __ss11_StringGutsV4growyySiF(0x36);
          __sSS6appendyySSF(0x272079654b,0xe500000000000000);
          __sSS6appendyySSF(param_1,param_2);
          __sSS6appendyySSF(0xd00000000000002f,0x80000001000ca5d0);
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,0,0xe000000000000000,
                     "ArgumentParser/NameSpecification.swift",0x26,2,0xa4,0);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000672c4);
          (*pcVar5)();
        }
        lVar7 = 0xf;
        uVar10 = param_1;
        __sSSySJSS5IndexVcig(0xf,param_1,param_2);
        bVar12 = 0x40;
      }
      FUN_100066dec(lVar2,uVar3,bVar4);
      puVar6 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar6 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_10006edd4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar3 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_10006edd4(puVar9,uVar3 + 1,1,puVar8);
      }
      pbVar13 = pbVar13 + 0x18;
      *(ulong *)(puVar9 + 0x10) = uVar3 + 1;
      *(long *)(puVar9 + uVar3 * 0x18 + 0x20) = lVar7;
      *(ulong *)(puVar9 + uVar3 * 0x18 + 0x28) = uVar10;
      puVar9[uVar3 * 0x18 + 0x30] = bVar12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return puVar9;
}

