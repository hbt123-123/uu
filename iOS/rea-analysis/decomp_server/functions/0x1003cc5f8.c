// rea decompile_all
// name: FUN_1003cc5f8
// address: 0x1003cc5f8
// body: available
// range: 0x1003cc5f8-0x1003cc6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003cc5f8(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x21;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_58;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = puVar6;
    FUN_10040a1e8(puVar6,0);
    lVar3 = 0;
    FUN_1003c5f68();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    puVar4 = &local_88;
    FUN_10040b830(puVar4,(undefined *)((long)puVar2 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)))
                  ,puVar6,param_1);
    _swift_bridgeObjectRetain(param_1);
    FUN_10003f638(local_88,uStack_80,local_78,uStack_70,local_68);
    if (puVar4 != puVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cc6f8);
      (*pcVar1)();
    }
  }
  local_58 = puVar2;
  FUN_1003cc414(&local_58);
  puVar2 = local_58;
  if (unaff_x21 != 0) {
    _swift_release(local_58);
  }
  return puVar2;
}

