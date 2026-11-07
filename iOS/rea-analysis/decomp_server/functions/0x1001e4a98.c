// rea decompile_all
// name: FUN_1001e4a98
// address: 0x1001e4a98
// body: available
// range: 0x1001e4a98-0x1001e4b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001e4a98(void)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long unaff_x20;
  ulong local_48 [3];
  
  iVar3 = -1;
  FUN_1001e5e8c(0xffffffff);
  lVar1 = _TtC14UURemoteServer15TerminalManager::sessions;
  puVar2 = local_48;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,puVar2,0x20,0);
  lVar4 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
  while ((lVar4 != 0 && (thunk_FUN_1001a2c34(iVar3 + 1), ((ulong)puVar2 & 1) != 0))) {
    _swift_endAccess(local_48);
    do {
      local_48[0] = 0;
      _swift_stdlib_random(local_48,8);
      lVar4 = (local_48[0] << 0x20) - (local_48[0] & 0xffffffff);
    } while ((int)lVar4 == 0);
    iVar3 = (int)((ulong)lVar4 >> 0x20);
    puVar2 = local_48;
    _swift_beginAccess(unaff_x20 + lVar1,puVar2,0x20,0);
    lVar4 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
  }
  _swift_endAccess(local_48);
  return iVar3 + 1;
}

