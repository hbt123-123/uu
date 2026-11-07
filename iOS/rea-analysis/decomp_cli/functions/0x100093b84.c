// rea decompile_all
// name: FUN_100093b84
// address: 0x100093b84
// body: available
// range: 0x100093b84-0x100093f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100093cfc) */
/* WARNING: Removing unreachable block (ram,0x000100093d4c) */
/* WARNING: Removing unreachable block (ram,0x000100093e84) */
/* WARNING: Removing unreachable block (ram,0x000100093d74) */
/* WARNING: Removing unreachable block (ram,0x000100093ee0) */
/* WARNING: Removing unreachable block (ram,0x000100093dd4) */

long FUN_100093b84(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  FUN_1000b4e48();
  _swift_beginAccess(param_1 + 0x28,local_68,0,0);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar1 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar1 == 0) {
    _swift_retain(param_1);
  }
  else {
    FUN_100095718();
    puVar2 = &DAT_100104458;
    FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
    _swift_allocObject();
    _swift_weakInit(puVar2 + 0x20,0);
    *(undefined **)(puVar2 + 0x10) = &DAT_1000fae00;
    *(ulong *)(puVar2 + 0x18) = uVar1;
    _swift_weakAssign(puVar2 + 0x20,0);
    *(undefined **)(puVar2 + 0x28) = PTR___swiftEmptyArrayStorage_1000f0740;
    _swift_beginAccess(param_1 + 0x28,local_80,0x21,0);
    _swift_retain(param_1);
    FUN_1000b45f8();
    uVar1 = *(ulong *)(param_1 + 0x28);
    uVar4 = uVar1 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar1 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10006f6e0(uVar1,uVar3 + 1,1);
      uVar4 = uVar1 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
    *(undefined **)(uVar4 + uVar3 * 8 + 0x20) = puVar2;
    *(ulong *)(param_1 + 0x28) = uVar1;
    _swift_endAccess(local_80);
    _swift_weakAssign(puVar2 + 0x20,param_1);
  }
  return param_1;
}

