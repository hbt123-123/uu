// rea decompile_all
// name: FUN_10011df00
// address: 0x10011df00
// body: available
// range: 0x10011df00-0x10011e00b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10011df00(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar4 = param_1;
  __sSS5countSivg();
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar4 != 0) {
    FUN_10006fae0(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10011e00c);
      (*pcVar3)();
    }
    uVar7 = 0xf;
    do {
      uVar5 = uVar7;
      uVar6 = param_1;
      __sSSySJSS5IndexVcig(uVar7,param_1,param_2);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_10006fae0(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x20) = uVar5;
      *(ulong *)(puVar2 + uVar1 * 0x10 + 0x28) = uVar6;
      __sSS5index5afterSS5IndexVAD_tF(uVar7,param_1,param_2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return puVar2;
}

