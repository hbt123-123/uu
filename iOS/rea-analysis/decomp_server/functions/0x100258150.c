// rea decompile_all
// name: FUN_100258150
// address: 0x100258150
// body: available
// range: 0x100258150-0x1002582a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100258288) */

undefined * FUN_100258150(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  uVar1 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  _swift_beginAccess(unaff_x20 + 0x30,auStack_58,0,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  if (uVar5 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar5 & 0xffffffffffffff8;
    if ((long)uVar5 < 0) {
      uVar2 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar2 == 0) {
    _swift_release(uVar1);
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    local_60 = uVar7;
    _swift_bridgeObjectRetain(uVar7);
    puVar3 = &DAT_100a807e0;
    FUN_100004bb4(&DAT_100a807e0,&DAT_100814f50);
    puVar6 = puVar3;
    FUN_1002582ac();
    puVar4 = &local_60;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar4,puVar3,puVar6);
    _swift_bridgeObjectRelease(uVar7);
    puVar6 = &DAT_100a807f8;
    FUN_100004bb4(&DAT_100a807f8,&DAT_100814aa8);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined8 **)(puVar6 + 0x20) = puVar4;
    *(undefined **)(puVar6 + 0x28) = puVar3;
    _swift_release(uVar1);
  }
  return puVar6;
}

