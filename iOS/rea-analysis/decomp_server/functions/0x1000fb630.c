// rea decompile_all
// name: FUN_1000fb630
// address: 0x1000fb630
// body: available
// range: 0x1000fb630-0x1000fb817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000fb630(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [144];
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [50];
  char local_9e;
  undefined1 local_98 [56];
  
  uVar8 = *(ulong *)(param_1 + 0x18);
  if (uVar8 != 0) {
    uVar9 = *(ulong *)(param_1 + 0x10);
    uVar1 = uVar9 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar1 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      _swift_bridgeObjectRetain(uVar8);
      FUN_10067efd4(auStack_108,uVar9,uVar8);
      puVar4 = &DAT_100a76d38;
      FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
      puVar5 = puVar4;
      _swift_initStackObject();
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      puVar2 = PTR___sSSN_1009957f8;
      *(undefined **)(puVar5 + 0x38) = PTR___sSSN_1009957f8;
      *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_1009e61c8;
      *(undefined8 *)(puVar5 + 0x20) = 0x695f6e6565726373;
      *(undefined8 *)(puVar5 + 0x28) = 0xe900000000000064;
      thunk_FUN_10068573c(auStack_d0);
      _swift_setDeallocating(puVar5);
      uVar10 = *(undefined8 *)(puVar5 + 0x10);
      puVar6 = &DAT_100a76d40;
      FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
      _swift_arrayDestroy(puVar5 + 0x20,uVar10,puVar6);
      FUN_1000abcec(auStack_d0);
      if (local_9e == '\x06') {
        _swift_initStackObject(puVar4,auStack_198);
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined **)(puVar4 + 0x38) = puVar2;
        *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_1009e61c8;
        puVar11 = (undefined8 *)(puVar4 + 0x20);
        *puVar11 = 0x695f6e6565726373;
        *(undefined8 *)(puVar4 + 0x28) = 0xe900000000000064;
        thunk_FUN_10068573c(local_98);
        _swift_setDeallocating(puVar4);
        _swift_arrayDestroy(puVar11,*(undefined8 *)(puVar4 + 0x10),puVar6);
        FUN_100689480();
        FUN_1000abcec(auStack_108);
        FUN_1000abcec(local_98);
        if ((long)puVar11 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fb814);
          (*pcVar3)();
        }
        if (0x7fffffff < (long)puVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fb818);
          (*pcVar3)();
        }
        bVar7 = 0;
        uVar8 = (ulong)puVar11 & 0xffffffff;
        goto LAB_1000fb7e4;
      }
      FUN_1000abcec(auStack_108);
    }
  }
  uVar8 = 0;
  bVar7 = 1;
LAB_1000fb7e4:
  return uVar8 | (ulong)bVar7 << 0x20;
}

