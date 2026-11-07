// rea decompile_all
// name: FUN_1001295ac
// address: 0x1001295ac
// body: available
// range: 0x1001295ac-0x1001297d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001295ac(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long extraout_x8;
  ulong uVar3;
  long extraout_x12;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  
  puVar1 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = (long)puVar7 - extraout_x12;
  lVar8 = *unaff_x20;
  if (*(long *)(lVar8 + 0x10) != 0) {
    uVar2 = *(ulong *)(lVar8 + 0x28);
    __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar2,param_1 & 0xffffffff,4);
    uVar3 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) != 0) {
      do {
        if (*(int *)(*(long *)(lVar8 + 0x30) + uVar2 * 4) == (int)param_1) {
          uVar3 = unaff_x20[1];
          uVar2 = param_1;
          thunk_FUN_100152fd0();
          if ((uVar2 & 1) != 0) {
            return 0;
          }
          lVar8 = unaff_x20[3];
          if ((*(long *)(lVar8 + 0x10) != 0) &&
             (uVar2 = param_1, thunk_FUN_1001a2c34(param_1), (uVar3 & 1) != 0)) {
            lVar4 = *(long *)(lVar8 + 0x38);
            lVar8 = 0;
            __s10Foundation4DateVMa();
            lVar5 = *(long *)(lVar8 + -8);
            (**(code **)(lVar5 + 0x10))(lVar6,lVar4 + *(long *)(lVar5 + 0x48) * uVar2,lVar8);
            (**(code **)(lVar5 + 0x38))(lVar6,0,1,lVar8);
            FUN_100040bb4(lVar6,&DAT_100a76718,&DAT_10080ccc0);
            return 0;
          }
          lVar8 = 0;
          __s10Foundation4DateVMa();
          lVar4 = *(long *)(lVar8 + -8);
          pcVar9 = *(code **)(lVar4 + 0x38);
          (*pcVar9)(lVar6,1,1,lVar8);
          FUN_100040bb4(lVar6,&DAT_100a76718,&DAT_10080ccc0);
          (**(code **)(lVar4 + 0x10))(puVar7,param_2,lVar8);
          (*pcVar9)(puVar7,0,1,lVar8);
          FUN_10018bad8(puVar7,param_1);
          return 1;
        }
        uVar2 = uVar2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar8 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1)
               != 0);
    }
  }
  return 0;
}

