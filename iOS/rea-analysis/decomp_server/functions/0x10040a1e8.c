// rea decompile_all
// name: FUN_10040a1e8
// address: 0x10040a1e8
// body: available
// range: 0x10040a1e8-0x10040a2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10040a1e8(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_2 != 0) {
    puVar3 = &DAT_100a8e2d8;
    FUN_100004bb4(&DAT_100a8e2d8,&DAT_100824c60);
    lVar4 = 0;
    FUN_1003c5f68();
    lVar7 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
    uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
    uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar3,uVar8 + lVar7 * param_2,uVar6 | 7);
    puVar5 = puVar3;
    _malloc_size();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10040a2a4);
      (*pcVar2)();
    }
    lVar4 = (long)puVar5 - uVar8;
    if (lVar4 == -0x8000000000000000 && lVar7 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10040a2a8);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar7 != 0) {
      lVar1 = lVar4 / lVar7;
    }
    *(long *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = lVar1 << 1;
  }
  return puVar3;
}

