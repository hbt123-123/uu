// rea decompile_all
// name: FUN_100671730
// address: 0x100671730
// body: available
// range: 0x100671730-0x1006717b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100671730(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  uint *puVar3;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + 0x10);
  if (0xf < *(ulong *)(lVar2 + 0x10)) {
    puVar3 = (uint *)*param_1;
    *puVar3 = (uint)(*(ushort *)(lVar2 + 0x2e) >> 8) | (*(ushort *)(lVar2 + 0x2e) & 0xff00ff) << 8;
    puVar3[1] = (uint)(*(ushort *)(lVar2 + 0x2c) >> 8) | (*(ushort *)(lVar2 + 0x2c) & 0xff00ff) << 8
    ;
    puVar3[2] = (uint)(*(ushort *)(lVar2 + 0x2a) >> 8) | (*(ushort *)(lVar2 + 0x2a) & 0xff00ff) << 8
    ;
    puVar3[3] = (uint)(*(ushort *)(lVar2 + 0x28) >> 8) | (*(ushort *)(lVar2 + 0x28) & 0xff00ff) << 8
    ;
    puVar3[4] = (uint)(*(ushort *)(lVar2 + 0x26) >> 8) | (*(ushort *)(lVar2 + 0x26) & 0xff00ff) << 8
    ;
    puVar3[5] = (uint)(*(ushort *)(lVar2 + 0x24) >> 8) | (*(ushort *)(lVar2 + 0x24) & 0xff00ff) << 8
    ;
    puVar3[6] = (uint)(*(ushort *)(lVar2 + 0x22) >> 8) | (*(ushort *)(lVar2 + 0x22) & 0xff00ff) << 8
    ;
    puVar3[7] = (uint)(*(ushort *)(lVar2 + 0x20) >> 8) | (*(ushort *)(lVar2 + 0x20) & 0xff00ff) << 8
    ;
    *param_2 = 8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006717b8);
  (*pcVar1)();
}

