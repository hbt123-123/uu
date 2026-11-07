// rea decompile_all
// name: FUN_10062d97c
// address: 0x10062d97c
// body: available
// range: 0x10062d97c-0x10062db2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10062d97c(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  puVar4 = (undefined4 *)0x400;
  _swift_slowAlloc(0x400,0xffffffffffffffff);
  pvVar5 = (void *)0x400;
  _swift_slowAlloc(0x400,0xffffffffffffffff);
  _bzero(puVar4 + 1,0x3fc);
  _bzero(pvVar5,0x400);
  *puVar4 = 99;
  uVar10 = 1;
  uVar9 = 1;
  do {
    uVar2 = (uint)(int)(char)uVar9 >> 7 & 0x1b ^ (uint)uVar9 << 1 ^ (uint)uVar9;
    uVar9 = (ulong)uVar2;
    uVar10 = uVar10 ^ uVar10 << 1;
    uVar10 = uVar10 ^ uVar10 << 2;
    uVar3 = uVar10 ^ uVar10 << 4;
    uVar10 = (uint)(int)(char)uVar3 >> 7 & 9 ^ uVar3;
    uVar3 = (uVar3 >> 6 & 3 | uVar10 << 2) ^ (uVar3 >> 7 & 1 | uVar10 << 1) ^
            (uVar3 >> 5 & 7 | uVar10 << 3) ^ (uVar3 >> 4 & 0xf | uVar10 << 4) ^ uVar10 ^ 99;
    puVar4[uVar9 & 0xff] = uVar3 & 0xff;
    uVar2 = uVar2 & 0xff;
    *(uint *)((long)pvVar5 + ((ulong)uVar3 & 0xff) * 4) = uVar2;
  } while (uVar2 != 1);
  puVar6 = &DAT_100ab7cb8;
  FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
  puVar7 = puVar6;
  _swift_allocObject();
  puVar8 = puVar7;
  _malloc_size();
  puVar1 = puVar8 + -0x1d;
  if (0x1f < (long)puVar8) {
    puVar1 = puVar8 + -0x20;
  }
  *(undefined8 *)(puVar7 + 0x10) = 0x100;
  *(long *)(puVar7 + 0x18) = ((long)puVar1 >> 2) << 1;
  _memcpy(puVar7 + 0x20,puVar4,0x400);
  _swift_allocObject(puVar6,0x420,7);
  puVar8 = puVar6;
  _malloc_size();
  puVar1 = puVar8 + -0x1d;
  if (0x1f < (long)puVar8) {
    puVar1 = puVar8 + -0x20;
  }
  *(undefined8 *)(puVar6 + 0x10) = 0x100;
  *(long *)(puVar6 + 0x18) = ((long)puVar1 >> 2) << 1;
  _memcpy(puVar6 + 0x20,pvVar5,0x400);
  _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
  _swift_slowDealloc(pvVar5,0xffffffffffffffff,0xffffffffffffffff);
  auVar11._8_8_ = puVar6;
  auVar11._0_8_ = puVar7;
  return auVar11;
}

