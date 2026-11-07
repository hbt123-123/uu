// rea decompile_all
// name: FUN_100536984
// address: 0x100536984
// body: available
// range: 0x100536984-0x100536a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100536a04) */

void FUN_100536984(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x21;
  
  puVar3 = (undefined8 *)0x7b;
  FUN_1005363c8();
  if (unaff_x21 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x58) + -1;
    if (SBORROW8(*(long *)(unaff_x20 + 0x58),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100536a50);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar1;
    if (lVar1 < 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar3,0,0);
      puVar3[1] = 0x13;
      *puVar3 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10053320c();
      if (((ulong)puVar3 & 1) == 0) {
        while( true ) {
          FUN_100535660();
          FUN_10053684c();
          uVar4 = 0;
          FUN_1005363c8();
          FUN_100536528();
          FUN_10053320c();
          if ((uVar4 & 1) != 0) break;
          FUN_1005363c8(0x2c);
        }
      }
    }
  }
  return;
}

