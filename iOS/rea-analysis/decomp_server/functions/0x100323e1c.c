// rea decompile_all
// name: FUN_100323e1c
// address: 0x100323e1c
// body: available
// range: 0x100323e1c-0x100323f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100323e1c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100a85fc8;
  FUN_100004bb4(&DAT_100a85fc8,&DAT_10081a5c8);
  lVar5 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  lVar2 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),1,1,lVar2);
  puVar1 = &DAT_1009b1be8;
  _swift_allocObject(&DAT_1009b1be8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = unaff_x20;
  _swift_retain(param_3);
  _swift_retain();
  uVar3 = 0;
  FUN_10032115c(0,0,&stack0xffffffffffffffc0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),&DAT_10081a628,
                puVar1);
  _swift_retain();
  if ((param_1 & 1) != 0) {
    uVar4 = uVar3;
    _swift_retain();
    __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
    if ((uVar4 & 1) != 0) {
      puVar1 = &DAT_100a838d8;
      FUN_100004bb4(&DAT_100a838d8,&DAT_100817df8);
      __sScT6cancelyyF(uVar3,puVar1,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
    }
    _swift_release(uVar3);
  }
  return uVar3;
}

