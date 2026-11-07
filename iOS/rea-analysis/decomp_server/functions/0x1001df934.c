// rea decompile_all
// name: FUN_1001df934
// address: 0x1001df934
// body: available
// range: 0x1001df934-0x1001df9f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001df934(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined auStack_50 [8];
  undefined8 local_48;
  
  puVar6 = auStack_50;
  uVar1 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar2 = 0xb;
  if (((uint)(param_2 >> 0x3c) & (uint)((param_1 & 0x800000000000000) == 0)) == 0) {
    uVar2 = 7;
  }
  puVar4 = (undefined *)0xf;
  FUN_1001dfbb4(0xf,uVar2 | uVar1 << 0x10,param_1,param_2);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    FUN_1001dfb34();
    _swift_bridgeObjectRetain(param_2);
    FUN_1001df9f8(auStack_50,puVar5 + 0x20,puVar4,param_1,param_2);
    _swift_bridgeObjectRelease(local_48);
    if (puVar6 != puVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001df9d8);
      (*pcVar3)();
    }
  }
  return puVar5;
}

