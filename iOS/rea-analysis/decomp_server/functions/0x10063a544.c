// rea decompile_all
// name: FUN_10063a544
// address: 0x10063a544
// body: available
// range: 0x10063a544-0x10063a627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10063a544(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  uVar5 = uVar6 >> 1;
  _swift_bridgeObjectRetain_n(param_1,3);
  uVar2 = param_1;
  FUN_10067c9e0(param_1,param_1 + 0x20,uVar5,uVar6 << 1 | 1,uVar5);
  lVar3 = uVar2 + param_2;
  if (CARRY8(uVar2,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a624);
    (*pcVar1)();
  }
  thunk_FUN_10066690c(lVar3,8);
  uVar2 = *(long *)(lVar3 + 0x10) + uVar5;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),uVar5)) {
    uVar4 = 0;
    FUN_1006295a0(0,uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_100995ea0);
    _swift_unknownObjectRetain(param_1);
    FUN_100628bc8();
    FUN_100628ae0(lVar3);
    _swift_bridgeObjectRelease_n(param_1,2);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a628);
  (*pcVar1)();
}

