// rea decompile_all
// name: FUN_1000ea404
// address: 0x1000ea404
// body: available
// range: 0x1000ea404-0x1000ea5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000ea49c) */
/* WARNING: Removing unreachable block (ram,0x0001000ea5e0) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4a8) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4b0) */
/* WARNING: Removing unreachable block (ram,0x0001000ea500) */
/* WARNING: Removing unreachable block (ram,0x0001000ea50c) */
/* WARNING: Removing unreachable block (ram,0x0001000ea480) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4b4) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4c0) */
/* WARNING: Removing unreachable block (ram,0x0001000ea484) */
/* WARNING: Removing unreachable block (ram,0x0001000ea490) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4cc) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4d4) */
/* WARNING: Removing unreachable block (ram,0x0001000ea510) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4dc) */
/* WARNING: Removing unreachable block (ram,0x0001000ea5e8) */
/* WARNING: Removing unreachable block (ram,0x0001000ea4e8) */
/* WARNING: Removing unreachable block (ram,0x0001000ea5dc) */
/* WARNING: Removing unreachable block (ram,0x0001000ea5d8) */

undefined1  [16] FUN_1000ea404(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  
  uVar4 = param_2;
  do {
    if ((long)param_2 < 1) {
LAB_1000ea584:
      FUN_100008184(0,0xc000000000000000);
      FUN_100006cdc(0,0xc000000000000000);
LAB_1000ea5ac:
      return ZEXT816(0xc000000000000000) << 0x40;
    }
    uVar3 = param_2;
    __sSo12NSFileHandleC10FoundationE4read9upToCountAC4DataVSgSi_tKF();
    if (unaff_x21 != 0) {
      FUN_100006cdc(0,0xc000000000000000);
      goto LAB_1000ea5ac;
    }
    uVar1 = 0;
    if (uVar4 >> 0x3c < 0xf) {
      uVar1 = uVar3;
    }
    uVar3 = 0xc000000000000000;
    if (uVar4 >> 0x3c < 0xf) {
      uVar3 = uVar4;
    }
    uVar2 = (uint)(uVar3 >> 0x20);
    uVar5 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar5 == 0) {
        if ((uVar3 & 0xff000000000000) == 0) goto LAB_1000ea578;
      }
      else if ((long)(int)uVar1 == (long)uVar1 >> 0x20) {
LAB_1000ea578:
        FUN_100006cdc(uVar1,uVar3);
        goto LAB_1000ea584;
      }
    }
    else if ((uVar5 != 2) || (*(long *)(uVar1 + 0x10) == *(long *)(uVar1 + 0x18)))
    goto LAB_1000ea578;
    __s10Foundation4DataV6appendyyACF(uVar1,uVar3);
    FUN_100006cdc(uVar1);
    uVar4 = uVar3;
  } while( true );
}

