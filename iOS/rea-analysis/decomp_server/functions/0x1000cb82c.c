// rea decompile_all
// name: FUN_1000cb82c
// address: 0x1000cb82c
// body: available
// range: 0x1000cb82c-0x1000cb9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000cb82c(double param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [8];
  undefined1 local_58;
  undefined1 local_54;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    __s10Foundation4DateVACycfC(auStack_60 + lVar1);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar4 + 8))(auStack_60 + lVar1,lVar2);
    if (1.0 <= param_1 - *(double *)(unaff_x20 + 0x20)) {
      *(double *)(unaff_x20 + 0x20) = param_1;
      FUN_1003e6e10(0);
      local_54 = 1;
      uVar3 = 0x100000000;
      FUN_1003e6b94(0x100000000,0x20705520656b6157,0xef79616c70736944);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)((long)auStack_70 + lVar1) = (int)uVar3;
      if ((uVar3 >> 0x20 & 1) == 0) {
        FUN_1003fb48c(FUN_1000cdfe0,auStack_80 + lVar1,0xd00000000000009c,0x8000000100885110,
                      0xd000000000000017,0x80000001008856e0,0x128,0);
        local_58 = 0;
        FUN_1003e6df8(uVar3 & 0xffffffff);
        return 1;
      }
      FUN_1003fb4ec(FUN_1000cdfd8,auStack_80 + lVar1,0xd00000000000009c,0x8000000100885110,
                    0xd000000000000017,0x80000001008856e0,0x12d,0);
    }
  }
  return 0;
}

