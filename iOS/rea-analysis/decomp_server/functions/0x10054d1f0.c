// rea decompile_all
// name: FUN_10054d1f0
// address: 0x10054d1f0
// body: available
// range: 0x10054d1f0-0x10054d293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054d1f0(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  size_t sVar8;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar1 = (long)*param_1;
  iVar2 = param_1[1];
  if (iVar2 < *param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10054d28c);
    (*pcVar4)();
  }
  sVar7 = *(size_t *)(param_1 + 2);
  sVar5 = sVar7;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (sVar5 != 0) {
    sVar6 = sVar5;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar3 = lVar1 - sVar6;
    if (!SBORROW8(lVar1,sVar6)) {
      sVar8 = iVar2 - lVar1;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)sVar8 <= (long)sVar6) {
        sVar6 = sVar8;
      }
      _memset((void *)(sVar5 + lVar3),param_2,sVar6);
      _swift_release(sVar7);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10054d290);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10054d294);
  (*pcVar4)();
}

