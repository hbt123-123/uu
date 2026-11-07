// rea decompile_all
// name: FUN_100275c44
// address: 0x100275c44
// body: available
// range: 0x100275c44-0x100275deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100275c44(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != (undefined *)0x0) {
    if (param_1 == (undefined *)0x1) {
      param_1 = &DAT_100a81b28;
      FUN_100004bb4(&DAT_100a81b28,&DAT_100815fb0);
      _swift_allocObject();
      puVar2 = param_1;
      _malloc_size();
      lVar3 = 0;
      puVar1 = puVar2 + -0x19;
      if (0x1f < (long)puVar2) {
        puVar1 = puVar2 + -0x20;
      }
      *(undefined8 *)(param_1 + 0x10) = 100;
      *(long *)(param_1 + 0x18) = ((long)puVar1 >> 3) << 1;
      *(undefined8 *)(param_1 + 0x20) = 200;
      lVar5 = 0xc9;
      lVar4 = 200;
      do {
        *(long *)(param_1 + lVar3 + 0x30) = lVar5 + 1;
        *(long *)(param_1 + lVar3 + 0x28) = lVar4 + 1;
        *(long *)(param_1 + lVar3 + 0x40) = lVar5 + 3;
        *(long *)(param_1 + lVar3 + 0x38) = lVar4 + 3;
        lVar4 = lVar4 + 4;
        lVar5 = lVar5 + 4;
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != 0x300);
      *(undefined8 *)(param_1 + 0x328) = 0x129;
      *(undefined8 *)(param_1 + 0x330) = 0x12a;
      *(undefined8 *)(param_1 + 0x338) = 299;
    }
    else if (param_1 == (undefined *)0x2) {
      param_1 = &DAT_100a81b28;
      FUN_100004bb4(&DAT_100a81b28,&DAT_100815fb0);
      _swift_allocObject();
      puVar2 = param_1;
      _malloc_size();
      lVar3 = 0;
      puVar1 = puVar2 + -0x19;
      if (0x1f < (long)puVar2) {
        puVar1 = puVar2 + -0x20;
      }
      *(undefined8 *)(param_1 + 0x10) = 200;
      *(long *)(param_1 + 0x18) = ((long)puVar1 >> 3) << 1;
      *(undefined8 *)(param_1 + 0x20) = 200;
      lVar5 = 0xc9;
      lVar4 = 200;
      do {
        *(long *)(param_1 + lVar3 + 0x30) = lVar5 + 1;
        *(long *)(param_1 + lVar3 + 0x28) = lVar4 + 1;
        *(long *)(param_1 + lVar3 + 0x40) = lVar5 + 3;
        *(long *)(param_1 + lVar3 + 0x38) = lVar4 + 3;
        lVar4 = lVar4 + 4;
        lVar5 = lVar5 + 4;
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != 0x620);
      *(undefined8 *)(param_1 + 0x648) = 0x18d;
      *(undefined8 *)(param_1 + 0x650) = 0x18e;
      *(undefined8 *)(param_1 + 0x658) = 399;
    }
    else {
      _swift_bridgeObjectRetain();
    }
    return param_1;
  }
  return PTR___swiftEmptyArrayStorage_100995ea0;
}

