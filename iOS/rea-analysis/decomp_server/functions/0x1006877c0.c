// rea decompile_all
// name: FUN_1006877c0
// address: 0x1006877c0
// body: available
// range: 0x1006877c0-0x100687957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006877c0(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = &local_50;
  puVar3 = &local_50;
  puVar4 = &local_50;
  puVar5 = &local_50;
  puVar6 = &local_50;
  cVar1 = *(char *)(unaff_x20 + 0x31);
  if (cVar1 == '\0') {
    uVar7 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"boolValue");
  }
  else if (cVar1 == '\x02') {
    uVar7 = (ulong)*(byte *)(unaff_x20 + 0x30);
  }
  else if (cVar1 == '\x01') {
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
    local_40 = *(undefined8 *)(unaff_x20 + 0x10);
    local_50 = 0x65757274;
    uStack_48 = 0xe400000000000000;
    FUN_10068e4f8();
    __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
              (&local_50,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
    if (puVar2 != (undefined8 *)0x0) {
      uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
      local_40 = *(undefined8 *)(unaff_x20 + 0x10);
      local_50 = 0x79;
      uStack_48 = 0xe100000000000000;
      __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                (&local_50,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
      if (puVar3 != (undefined8 *)0x0) {
        uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
        local_40 = *(undefined8 *)(unaff_x20 + 0x10);
        local_50 = 0x74;
        uStack_48 = 0xe100000000000000;
        __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                  (&local_50,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
        if (puVar4 != (undefined8 *)0x0) {
          uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
          local_40 = *(undefined8 *)(unaff_x20 + 0x10);
          local_50 = 0x736579;
          uStack_48 = 0xe300000000000000;
          __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                    (&local_50,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
          if (puVar5 != (undefined8 *)0x0) {
            uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
            local_40 = *(undefined8 *)(unaff_x20 + 0x10);
            local_50 = 0x31;
            uStack_48 = 0xe100000000000000;
            __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                      (&local_50,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
            return (ulong)(puVar6 == (undefined8 *)0x0);
          }
        }
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

