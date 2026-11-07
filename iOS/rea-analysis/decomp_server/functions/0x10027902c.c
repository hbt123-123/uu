// rea decompile_all
// name: FUN_10027902c
// address: 0x10027902c
// body: available
// range: 0x10027902c-0x10027919f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10027902c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar2 = 0;
  FUN_100277ad0();
  puVar5 = (undefined8 *)
           (&stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  FUN_1002782c4();
  uVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = (undefined8 *)((long)puVar5 - uVar7);
  lVar10 = (long)puVar8 - uVar7;
  FUN_100082394();
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar2);
  if ((int)puVar4 == 9) {
    FUN_1000823d8(puVar5,lVar10,FUN_1002782c4);
    FUN_1000823d8(lVar10,puVar8,FUN_1002782c4);
    puVar4 = puVar8;
    _swift_getEnumCaseMultiPayload(puVar8,lVar3);
    iVar1 = (int)puVar4;
    if (iVar1 < 3) {
      if (iVar1 == 0) {
        lVar2 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar8,lVar2);
        return 0;
      }
      if (iVar1 != 1) {
        uVar9 = *puVar8;
        _swift_bridgeObjectRelease(puVar8[2]);
        return uVar9;
      }
      return *puVar8;
    }
    if (iVar1 != 4) {
      return 0;
    }
    pcVar6 = FUN_1002782c4;
    puVar5 = puVar8;
  }
  else {
    pcVar6 = FUN_100277ad0;
  }
  FUN_1000d27dc(puVar5,pcVar6);
  return 0;
}

