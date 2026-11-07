// rea decompile_all
// name: FUN_10059e3f8
// address: 0x10059e3f8
// body: available
// range: 0x10059e3f8-0x10059e5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059e3f8(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((param_5 & 0xff) != 4) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(param_5 & 0xff);
  }
  if ((param_5 & 0xff00) != 0x300) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(param_5 >> 8 & 0xff);
  }
  if ((param_5 & 0xff0000) != 0x30000) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(param_5 >> 0x10 & 0xff);
  }
  if ((param_5 & 0xff000000) != 0x3000000) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF
              (*(undefined8 *)(&DAT_10083ccf8 + ((long)(param_5 << 0x20) >> 0x38) * 8));
  }
  if ((param_5 & 0xff00000000) != 0x300000000) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(param_5 >> 0x20 & 0xff);
  }
  if ((param_5 & 0xff0000000000) != 0x30000000000) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(param_5 >> 0x28 & 0xff);
  }
  if ((param_5 & 0xff000000000000) != 0x3000000000000) {
    __ss6HasherV8_combineyySuF(7);
    __ss6HasherV8_combineyySuF(param_5 >> 0x30 & 0xff);
  }
  if (param_5 >> 0x38 != 5) {
    __ss6HasherV8_combineyySuF(8);
    __ss6HasherV8_combineyySuF(param_5 >> 0x38);
  }
  FUN_100563e08(param_1,1000,0x2711,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_10059e594;
    }
    lVar3 = (long)(int)param_2;
    lVar4 = param_2 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_10059e594:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  return;
}

